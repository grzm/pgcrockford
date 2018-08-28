#ifndef BASE32_H
#define BASE32_H

#include "postgres.h"
#include "utils/builtins.h"

/* static int base32_digits[32] = */
/*   { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', */
/*     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', */
/*     'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', */
/*     'Y', 'Z' */
/*   }; */

/* static int base32_check_symbols[37] = */
/*   { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', */
/*     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', */
/*     'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', */
/*     'Y', 'Z', '*', '~', '$', '=', 'U' */
/*   }; */

#if PG_VERSION_NUM < 90600

#ifdef USE_FLOAT8_BYVAL
#define DatumGetUInt64(X) ((uint64) GET_8_BYTES(X))
#else
#define DatumGetUInt64(X) (* ((uint64 *) DatumGetPointer(X)))
#endif // USE_FLOAT8_BYVAL


#ifdef USE_FLOAT8_BYVAL
#define UInt64GetDatum(X) ((Datum) SET_8_BYTES(X))
#else
#define UInt64GetDatum(X) Int64GetDatum((int64) (X))
#endif // USE_FLOAT8_BYVAL

#endif // PG_VERSION_NUM < 90600

#define PG_RETURN_UINT32(x) return UInt32GetDatum(x)

#define PG_GETARG_UINT64(n) DatumGetUInt64(PG_GETARG_DATUM(n))
#define PG_RETURN_UINT64(x) return UInt64GetDatum(x)
#endif // BASE32_H

#define SAMESIGN(a,b)	(((a) < 0) == ((b) < 0))
