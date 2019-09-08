#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <libpq-fe.h>
#include <netinet/in.h>

static void
exit_nicely(PGconn *conn)
{
    PQfinish(conn);
    exit(1);
}

static void
clear_and_exit_nicely(PGconn *conn, PGresult *res)
{
    PQclear(res);
    exit_nicely(conn);
}

int main(int argc, char **argv)
{
    const char *conninfo;
    PGconn *conn;
    PGresult *res;

    Oid types[] = { 0, 0, 0 }, *oid = NULL;
    int lengths[] = { 2, 4, 8 }; // length in bytes
    int formats[] = { 1, 1, 1 }; // all binary
    uint32_t binary2 = htonl((uint16_t) 65535);
    uint32_t binary4 = htonl((uint32_t) 65535);
    // XXX htonll is very probably not portable. It's defined on macOS 10.14
    uint64_t binary8 = htonll((uint64_t) 65535);
    const char *values[] = { (const char*) &binary2,
                             (const char*) &binary4,
                             (const char*) &binary8
    };

    int err = 0;

    if (argc < 2) {
        fprintf(stderr, "Usage: bintest \"connection string\"\n");
        return 1;
    }

    conninfo = argv[1];
    conn = PQconnectdb(conninfo);

    if (PQstatus(conn) != CONNECTION_OK) {
        fprintf(stderr, "Connection failure: %s\n",
                PQerrorMessage(conn));
        exit_nicely(conn);
    }

    res = PQexec(conn, "SET search_path = crockford");
    if (PQresultStatus(res) != PGRES_COMMAND_OK)
    {
        fprintf(stderr, "SET failed: %s", PQerrorMessage(conn));
        clear_and_exit_nicely(conn, res);
    }
    PQclear(res);

    res = PQexecParams(conn,
                       "select 'crockford.crockford2'::regtype::oid,"
                       " 'crockford.crockford4'::regtype::oid,"
                       " 'crockford.crockford8'::regtype::oid",
                       0, // no parameters
                       NULL, NULL, NULL, NULL, // no parameters, so no parameter meta
                       1); // ask for binary results
    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        fprintf(stderr, "Error executing query: %s\n",
                PQerrorMessage(conn));
        clear_and_exit_nicely(conn, res);
    }

    for (int i = 0; i < 3; i++) {
        oid = (Oid*) PQgetvalue(res, 0, i);
        types[i] = ntohl(*oid);
    }

    PQclear(res);

    res = PQexecParams(conn, "SELECT $1, $2, $3",
                       3, types, values, lengths, formats, 1);

    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        fprintf(stderr, "Error executing query: %s\n",
                PQerrorMessage(conn));
        clear_and_exit_nicely(conn, res);
    }

    for (int i = 0; i < 3; i++) {
        if (PQftype(res, i) != types[i]) {
            fprintf(stderr, "Column %d is not the expected type.\n", i + 1);
            err++;
        }

        if (PQgetlength(res, 0, i) != lengths[i]) {
            fprintf(stderr, "Column %d is not of the right length.\n", i + 1);
            err++;
        }

        if (memcmp(PQgetvalue(res, 0, i), values[i], lengths[i]) != 0) {
            fprintf(stderr, "Data in column %d is not equal to value sent.\n", i + 1);
            char *val = PQgetvalue(res, 0, i);
            for (int b = 0; b < lengths[i]; b++)
                fprintf(stderr, "<0x%0x>\n", val[b]);
            err++;
        }

    }
    if (err > 0) {
        fprintf(stderr, "Not OK. Exiting.\n");
        clear_and_exit_nicely(conn, res);
    }

    fprintf(stdout, "All checks: OK\n");

    PQclear(res);
    PQfinish(conn);

    return 0;
}
