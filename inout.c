#include <postgres.h>
#include <fmgr.h>
#include <utils/builtins.h>

#include "base32.h"

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
base32_values[] = {
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
}; // base32_values

static uint64
base32_atou(const char *s, int size)
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
                 errmsg("invalid input syntax for base32 value: \"%s\"", s)));

    errno = 0;

    while (s[i]) {
        char c = base32_values[(size_t)s[i]];

        if (BAD_CHAR == c)
            ereport(ERROR,
                    (errcode(ERRCODE_INVALID_TEXT_REPRESENTATION),
                     errmsg("invalid input syntax for base32 value: \"%s\"", s),
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
                 errmsg("invalid input syntax for base32 value: \"%s\"", s)));


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
                 errmsg("value \"%s\" is out of range for type base32int%d", s, size)));

    return result;
}

static char*
base32_utoa(uint64 value)
{
    char *ptr;
    const char *base32_digits = "0123456789ABCDEFGHJKMNPQRSTVWXYZ";
    char buf[BASE32UINT8_LENGTH + 1];

    ptr = buf + sizeof(buf) - 1;
    *ptr = '\0';

    do {
        *--ptr = base32_digits[value % BASE32_RADIX];
        value /= BASE32_RADIX;
    } while (ptr > buf && value);

    return pstrdup(ptr);
}


// base32uint2

PG_FUNCTION_INFO_V1(base32uint2in);
Datum
base32uint2in(PG_FUNCTION_ARGS)
{
    char *s = PG_GETARG_CSTRING(0);

    PG_RETURN_UINT16(base32_atou(s, sizeof(uint16)));
}

PG_FUNCTION_INFO_V1(base32uint2out);
Datum
base32uint2out(PG_FUNCTION_ARGS)
{
    PG_RETURN_CSTRING(base32_utoa((uint64)PG_GETARG_UINT16(0)));
}


// base32uint4

PG_FUNCTION_INFO_V1(base32uint4in);
Datum
base32uint4in(PG_FUNCTION_ARGS)
{
    char *s = PG_GETARG_CSTRING(0);

    PG_RETURN_UINT32(base32_atou(s, sizeof(uint32)));
}

PG_FUNCTION_INFO_V1(base32uint4out);
Datum
base32uint4out(PG_FUNCTION_ARGS)
{
    PG_RETURN_CSTRING(base32_utoa((uint64)PG_GETARG_UINT32(0)));
}


// base32uint8

PG_FUNCTION_INFO_V1(base32uint8in);
Datum
base32uint8in(PG_FUNCTION_ARGS)
{
    char *s = PG_GETARG_CSTRING(0);

    PG_RETURN_UINT64(base32_atou(s, sizeof(uint64)));
}

PG_FUNCTION_INFO_V1(base32uint8out);
Datum
base32uint8out(PG_FUNCTION_ARGS)
{
    PG_RETURN_CSTRING(base32_utoa(PG_GETARG_UINT64(0)));
}
