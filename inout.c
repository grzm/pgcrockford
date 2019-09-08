#include <postgres.h>
#include <fmgr.h>
#include <libpq/pqformat.h>
#include <utils/builtins.h>

#include "crockford.h"

#include <inttypes.h>
#include <limits.h>

#define BASE32_RADIX 32
#define BASE32UINT8_LENGTH 13

#define BAD_CHAR -1
#define IGNORE_CHAR -2

#define MAX_BASE32_UINT16 65535ULL
#define MAX_BASE32_UINT32 4294967295ULL
#define MAX_BASE32_UINT64 18446744073709551615ULL

static const char
crockford_values[] = {
    // 0..47
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, IGNORE_CHAR, BAD_CHAR, BAD_CHAR,

    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, // '0'..'9'
    // 58..64
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR,
    10, 11, 12, 13, 14, 15, 16, 17, // 'A'..'H'
    1, // 'I'
    18, 19, // 'J'..'K'
    1, // 'L'
    20, 21, // 'M'..'N'
    0, // 'O'
    22, 23, 24, 25, 26, // 'P'..'T'
    BAD_CHAR, // 'U'
    27, 28, 29, 30, 31, // 'V'..'Z'
    // 91..96
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR,
    10, 11, 12, 13, 14, 15, 16, 17, // 'a'..'h'
    1, // 'i'
    18, 19, // 'j'..'k'
    1, // 'l'
    20, 21, // 'm'..'n'
    0, // 'o'
    22, 23, 24, 25, 26, // 'p'..'t'
    BAD_CHAR, // 'u'
    27, 28, 29, 30, 31, // 'v'..'z'
    // 123..255
    BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,

    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR,
    BAD_CHAR, BAD_CHAR, BAD_CHAR, BAD_CHAR
}; // crockford_values

static uint64
crockford_atou(const char *s, int size)
{
    unsigned long long int result = 0;
    bool out_of_range = false;
    const bool check_uint64 = (sizeof(uint64) == size);
    bool saw_digit = false;
    int i = 0;

    if (s == NULL)
        elog(ERROR, "NULL pointer");

    if (*s == 0)
        ereport(ERROR,
                (errcode(ERRCODE_INVALID_TEXT_REPRESENTATION),
                 errmsg("invalid input syntax for crockford value: \"%s\"", s)));

    errno = 0;

    while (s[i]) {
        char c = crockford_values[(size_t)s[i]];

        if (BAD_CHAR == c)
            ereport(ERROR,
                    (errcode(ERRCODE_INVALID_TEXT_REPRESENTATION),
                     errmsg("invalid input syntax for crockford value: \"%s\"", s),
                     errdetail("symbol \"%c\" is invalid", s[i])));

        if (IGNORE_CHAR != c) {
            saw_digit = true;
            if (check_uint64
                && ((MAX_BASE32_UINT64 - c)/BASE32_RADIX < result)
                )
            {
                out_of_range = true;
                break;
            }
            result = result * BASE32_RADIX + c;
        }

        i++;
    }

    if (!saw_digit)
        ereport(ERROR,
                (errcode(ERRCODE_INVALID_TEXT_REPRESENTATION),
                 errmsg("invalid input syntax for crockford value: \"%s\"", s)));


    switch (size)
    {
        case sizeof(uint64):
            if (errno == ERANGE || out_of_range)
                out_of_range = true;
            break;
        case sizeof(uint32):
            if (errno == ERANGE || result > MAX_BASE32_UINT32)
                out_of_range = true;
            break;
        case sizeof(uint16):
            if (errno == ERANGE || result > MAX_BASE32_UINT16)
                out_of_range = true;
            break;
        default:
            elog(ERROR, "unsupported result size: %d", size);
    }

    if (out_of_range)
        ereport(ERROR,
                (errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
                 errmsg("value \"%s\" is out of range for type crockfordint%d", s, size)));

    return result;
}

static char*
crockford_utoa(uint64 value)
{
    char *ptr;
    const char *crockford_digits = "0123456789ABCDEFGHJKMNPQRSTVWXYZ";
    char buf[BASE32UINT8_LENGTH + 1];

    ptr = buf + sizeof(buf) - 1;
    *ptr = '\0';

    do {
        *--ptr = crockford_digits[value % BASE32_RADIX];
        value /= BASE32_RADIX;
    } while (ptr > buf && value);

    return pstrdup(ptr);
}


// crockford2

PG_FUNCTION_INFO_V1(crockford2in);
Datum
crockford2in(PG_FUNCTION_ARGS)
{
    char *s = PG_GETARG_CSTRING(0);

    PG_RETURN_UINT16(crockford_atou(s, sizeof(uint16)));
}

PG_FUNCTION_INFO_V1(crockford2out);
Datum
crockford2out(PG_FUNCTION_ARGS)
{
    PG_RETURN_CSTRING(crockford_utoa((uint64)PG_GETARG_UINT16(0)));
}

PG_FUNCTION_INFO_V1(crockford2recv);
Datum
crockford2recv(PG_FUNCTION_ARGS)
{
    StringInfo  buf = (StringInfo) PG_GETARG_POINTER(0);
    PG_RETURN_UINT16((uint16) pq_getmsgint(buf, sizeof(uint16)));
}

PG_FUNCTION_INFO_V1(crockford2send);
Datum
crockford2send(PG_FUNCTION_ARGS)
{
    uint16      arg1 = PG_GETARG_UINT16(0);
    StringInfoData buf;

    pq_begintypsend(&buf);
    pq_sendint16(&buf, arg1);
    PG_RETURN_BYTEA_P(pq_endtypsend(&buf));
}

// crockford4

PG_FUNCTION_INFO_V1(crockford4in);
Datum
crockford4in(PG_FUNCTION_ARGS)
{
    char *s = PG_GETARG_CSTRING(0);

    PG_RETURN_UINT32(crockford_atou(s, sizeof(uint32)));
}

PG_FUNCTION_INFO_V1(crockford4out);
Datum
crockford4out(PG_FUNCTION_ARGS)
{
    PG_RETURN_CSTRING(crockford_utoa((uint64)PG_GETARG_UINT32(0)));
}


PG_FUNCTION_INFO_V1(crockford4recv);
Datum
crockford4recv(PG_FUNCTION_ARGS)
{
    StringInfo  buf = (StringInfo) PG_GETARG_POINTER(0);
    PG_RETURN_UINT32((uint32) pq_getmsgint(buf, sizeof(uint32)));
}

PG_FUNCTION_INFO_V1(crockford4send);
Datum
crockford4send(PG_FUNCTION_ARGS)
{
    uint32      arg1 = PG_GETARG_UINT32(0);
    StringInfoData buf;

    pq_begintypsend(&buf);
    pq_sendint32(&buf, arg1);
    PG_RETURN_BYTEA_P(pq_endtypsend(&buf));
}

// crockford8

PG_FUNCTION_INFO_V1(crockford8in);
Datum
crockford8in(PG_FUNCTION_ARGS)
{
    char *s = PG_GETARG_CSTRING(0);

    PG_RETURN_UINT64(crockford_atou(s, sizeof(uint64)));
}

PG_FUNCTION_INFO_V1(crockford8out);
Datum
crockford8out(PG_FUNCTION_ARGS)
{
    PG_RETURN_CSTRING(crockford_utoa(PG_GETARG_UINT64(0)));
}

PG_FUNCTION_INFO_V1(crockford8recv);
Datum
crockford8recv(PG_FUNCTION_ARGS)
{
    StringInfo  buf = (StringInfo) PG_GETARG_POINTER(0);
    PG_RETURN_UINT64((uint16) pq_getmsgint64(buf));
}

PG_FUNCTION_INFO_V1(crockford8send);
Datum
crockford8send(PG_FUNCTION_ARGS)
{
    uint64      arg1 = PG_GETARG_UINT64(0);
    StringInfoData buf;

    pq_begintypsend(&buf);
    pq_sendint64(&buf, arg1);
    PG_RETURN_BYTEA_P(pq_endtypsend(&buf));
}
