#include <postgres.h>
#include <fmgr.h>
#include <access/hash.h>

#include "base32.h"

#define make_hashfunc(type, BTYPE, casttype) \
PG_FUNCTION_INFO_V1(hash##type); \
Datum \
hash##type(PG_FUNCTION_ARGS) \
{ \
	return hash_uint32((casttype) PG_GETARG_##BTYPE(0)); \
} \
extern int no_such_variable

make_hashfunc(base32uint2, UINT16, uint32);
make_hashfunc(base32uint4, UINT32, uint32);

PG_FUNCTION_INFO_V1(hashbase32uint8);
Datum
hashbase32uint8(PG_FUNCTION_ARGS)
{
	/* see also hashint8 */
	uint64		val = PG_GETARG_UINT64(0);
	uint32		lohalf = (uint32) val;
	uint32		hihalf = (uint32) (val >> 32);

	lohalf ^= hihalf;

	return hash_uint32(lohalf);
}
