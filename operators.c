#include <postgres.h>
#include <fmgr.h>

#include "base32.h"

#include <utils/sortsupport.h>


PG_FUNCTION_INFO_V1(base32uint2base32uint2lt);
Datum
base32uint2base32uint2lt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2le);
Datum
base32uint2base32uint2le(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2eq);
Datum
base32uint2base32uint2eq(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2ne);
Datum
base32uint2base32uint2ne(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2ge);
Datum
base32uint2base32uint2ge(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2gt);
Datum
base32uint2base32uint2gt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint2base32uint2cmp);
Datum
btbase32uint2base32uint2cmp(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2pl);
Datum
base32uint2base32uint2pl(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint16 result;

	result = arg1 + arg2;

	if (result < arg1 || result < arg2)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2mi);
Datum
base32uint2base32uint2mi(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint16 result;

	result = arg1 - arg2;

	if (result > arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint4lt);
Datum
base32uint2base32uint4lt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint4le);
Datum
base32uint2base32uint4le(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint4eq);
Datum
base32uint2base32uint4eq(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint4ne);
Datum
base32uint2base32uint4ne(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint4ge);
Datum
base32uint2base32uint4ge(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint4gt);
Datum
base32uint2base32uint4gt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint2base32uint4cmp);
Datum
btbase32uint2base32uint4cmp(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint4pl);
Datum
base32uint2base32uint4pl(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 + arg2;

	if (result < arg1 || result < arg2)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint4mi);
Datum
base32uint2base32uint4mi(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 - arg2;

	if (result > arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2_to_base32uint4);
Datum
base32uint2_to_base32uint4(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint32 result;

	result = arg1;

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint8lt);
Datum
base32uint2base32uint8lt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint8le);
Datum
base32uint2base32uint8le(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint8eq);
Datum
base32uint2base32uint8eq(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint8ne);
Datum
base32uint2base32uint8ne(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint8ge);
Datum
base32uint2base32uint8ge(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint8gt);
Datum
base32uint2base32uint8gt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint2base32uint8cmp);
Datum
btbase32uint2base32uint8cmp(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint8pl);
Datum
base32uint2base32uint8pl(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 + arg2;

	if (result < arg1 || result < arg2)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint8mi);
Datum
base32uint2base32uint8mi(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 - arg2;

	if (result > arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint2_to_base32uint8);
Datum
base32uint2_to_base32uint8(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint64 result;

	result = arg1;

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint2int2lt);
Datum
base32uint2int2lt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int2le);
Datum
base32uint2int2le(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int2eq);
Datum
base32uint2int2eq(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int2ne);
Datum
base32uint2int2ne(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int2ge);
Datum
base32uint2int2ge(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int2gt);
Datum
base32uint2int2gt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint2int2cmp);
Datum
btbase32uint2int2cmp(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 arg2 = PG_GETARG_INT16(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2int2pl);
Datum
base32uint2int2pl(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 arg2 = PG_GETARG_INT16(1);
	uint16 result;

	result = arg1 + arg2;

	if ((arg2 < 0 && result > arg1) || (arg2 > 0 && result < arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2int2mi);
Datum
base32uint2int2mi(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 arg2 = PG_GETARG_INT16(1);
	uint16 result;

	result = arg1 - arg2;

	if ((arg2 < 0 && result < arg1) || (arg2 > 0 && result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2_to_int2);
Datum
base32uint2_to_int2(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int16 result;

	result = arg1;
	if ((uint16) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int2 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int2 out of range")));

	PG_RETURN_INT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4lt);
Datum
base32uint2int4lt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4le);
Datum
base32uint2int4le(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4eq);
Datum
base32uint2int4eq(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4ne);
Datum
base32uint2int4ne(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4ge);
Datum
base32uint2int4ge(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4gt);
Datum
base32uint2int4gt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint2int4cmp);
Datum
btbase32uint2int4cmp(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4pl);
Datum
base32uint2int4pl(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	int32 result;

	result = arg1 + arg2;

	if (SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4mi);
Datum
base32uint2int4mi(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	int32 result;

	result = arg1 - arg2;

	if (!SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2_to_int4);
Datum
base32uint2_to_int4(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 result;

	result = arg1;
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int4 out of range")));

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2int8lt);
Datum
base32uint2int8lt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int8le);
Datum
base32uint2int8le(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int8eq);
Datum
base32uint2int8eq(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int8ne);
Datum
base32uint2int8ne(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int8ge);
Datum
base32uint2int8ge(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint2int8gt);
Datum
base32uint2int8gt(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint2int8cmp);
Datum
btbase32uint2int8cmp(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 arg2 = PG_GETARG_INT64(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint2int8pl);
Datum
base32uint2int8pl(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 arg2 = PG_GETARG_INT64(1);
	int64 result;

	result = arg1 + arg2;

	if (SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(base32uint2int8mi);
Datum
base32uint2int8mi(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 arg2 = PG_GETARG_INT64(1);
	int64 result;

	result = arg1 - arg2;

	if (!SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(base32uint2_to_int8);
Datum
base32uint2_to_int8(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int64 result;

	result = arg1;
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int8 out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint2lt);
Datum
base32uint4base32uint2lt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint2le);
Datum
base32uint4base32uint2le(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint2eq);
Datum
base32uint4base32uint2eq(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint2ne);
Datum
base32uint4base32uint2ne(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint2ge);
Datum
base32uint4base32uint2ge(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint2gt);
Datum
base32uint4base32uint2gt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint4base32uint2cmp);
Datum
btbase32uint4base32uint2cmp(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint2pl);
Datum
base32uint4base32uint2pl(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint32 result;

	result = arg1 + arg2;

	if (result < arg1 || result < arg2)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint2mi);
Datum
base32uint4base32uint2mi(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint32 result;

	result = arg1 - arg2;

	if (result > arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4_to_base32uint2);
Datum
base32uint4_to_base32uint2(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint16 result;

	result = arg1;
	if ((uint32) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint2 out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4lt);
Datum
base32uint4base32uint4lt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4le);
Datum
base32uint4base32uint4le(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4eq);
Datum
base32uint4base32uint4eq(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4ne);
Datum
base32uint4base32uint4ne(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4ge);
Datum
base32uint4base32uint4ge(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4gt);
Datum
base32uint4base32uint4gt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint4base32uint4cmp);
Datum
btbase32uint4base32uint4cmp(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4pl);
Datum
base32uint4base32uint4pl(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 + arg2;

	if (result < arg1 || result < arg2)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4mi);
Datum
base32uint4base32uint4mi(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 - arg2;

	if (result > arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint8lt);
Datum
base32uint4base32uint8lt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint8le);
Datum
base32uint4base32uint8le(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint8eq);
Datum
base32uint4base32uint8eq(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint8ne);
Datum
base32uint4base32uint8ne(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint8ge);
Datum
base32uint4base32uint8ge(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint8gt);
Datum
base32uint4base32uint8gt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint4base32uint8cmp);
Datum
btbase32uint4base32uint8cmp(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint8pl);
Datum
base32uint4base32uint8pl(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 + arg2;

	if (result < arg1 || result < arg2)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint8mi);
Datum
base32uint4base32uint8mi(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 - arg2;

	if (result > arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint4_to_base32uint8);
Datum
base32uint4_to_base32uint8(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint64 result;

	result = arg1;

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint4int2lt);
Datum
base32uint4int2lt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int2le);
Datum
base32uint4int2le(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int2eq);
Datum
base32uint4int2eq(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int2ne);
Datum
base32uint4int2ne(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int2ge);
Datum
base32uint4int2ge(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int2gt);
Datum
base32uint4int2gt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint4int2cmp);
Datum
btbase32uint4int2cmp(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 arg2 = PG_GETARG_INT16(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4int2pl);
Datum
base32uint4int2pl(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 arg2 = PG_GETARG_INT16(1);
	uint32 result;

	result = arg1 + arg2;

	if ((arg2 < 0 && result > arg1) || (arg2 > 0 && result < arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4int2mi);
Datum
base32uint4int2mi(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 arg2 = PG_GETARG_INT16(1);
	uint32 result;

	result = arg1 - arg2;

	if ((arg2 < 0 && result < arg1) || (arg2 > 0 && result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4_to_int2);
Datum
base32uint4_to_int2(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int16 result;

	result = arg1;
	if ((uint32) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int2 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int2 out of range")));

	PG_RETURN_INT16(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4lt);
Datum
base32uint4int4lt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4le);
Datum
base32uint4int4le(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4eq);
Datum
base32uint4int4eq(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4ne);
Datum
base32uint4int4ne(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4ge);
Datum
base32uint4int4ge(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4gt);
Datum
base32uint4int4gt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint4int4cmp);
Datum
btbase32uint4int4cmp(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4pl);
Datum
base32uint4int4pl(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint32 result;

	result = arg1 + arg2;

	if ((arg2 < 0 && result > arg1) || (arg2 > 0 && result < arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4mi);
Datum
base32uint4int4mi(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint32 result;

	result = arg1 - arg2;

	if ((arg2 < 0 && result < arg1) || (arg2 > 0 && result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4_to_int4);
Datum
base32uint4_to_int4(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 result;

	result = arg1;
	if ((uint32) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int4 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int4 out of range")));

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4int8lt);
Datum
base32uint4int8lt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int8le);
Datum
base32uint4int8le(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int8eq);
Datum
base32uint4int8eq(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int8ne);
Datum
base32uint4int8ne(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int8ge);
Datum
base32uint4int8ge(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint4int8gt);
Datum
base32uint4int8gt(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint4int8cmp);
Datum
btbase32uint4int8cmp(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 arg2 = PG_GETARG_INT64(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4int8pl);
Datum
base32uint4int8pl(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 arg2 = PG_GETARG_INT64(1);
	int64 result;

	result = arg1 + arg2;

	if (SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(base32uint4int8mi);
Datum
base32uint4int8mi(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 arg2 = PG_GETARG_INT64(1);
	int64 result;

	result = arg1 - arg2;

	if (!SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(base32uint4_to_int8);
Datum
base32uint4_to_int8(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int64 result;

	result = arg1;
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int8 out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint2lt);
Datum
base32uint8base32uint2lt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint2le);
Datum
base32uint8base32uint2le(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint2eq);
Datum
base32uint8base32uint2eq(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint2ne);
Datum
base32uint8base32uint2ne(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint2ge);
Datum
base32uint8base32uint2ge(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint2gt);
Datum
base32uint8base32uint2gt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint8base32uint2cmp);
Datum
btbase32uint8base32uint2cmp(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint2pl);
Datum
base32uint8base32uint2pl(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint64 result;

	result = arg1 + arg2;

	if (result < arg1 || result < arg2)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint2mi);
Datum
base32uint8base32uint2mi(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint64 result;

	result = arg1 - arg2;

	if (result > arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8_to_base32uint2);
Datum
base32uint8_to_base32uint2(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint16 result;

	result = arg1;
	if ((uint64) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint2 out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint4lt);
Datum
base32uint8base32uint4lt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint4le);
Datum
base32uint8base32uint4le(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint4eq);
Datum
base32uint8base32uint4eq(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint4ne);
Datum
base32uint8base32uint4ne(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint4ge);
Datum
base32uint8base32uint4ge(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint4gt);
Datum
base32uint8base32uint4gt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint8base32uint4cmp);
Datum
btbase32uint8base32uint4cmp(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint4pl);
Datum
base32uint8base32uint4pl(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint64 result;

	result = arg1 + arg2;

	if (result < arg1 || result < arg2)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint4mi);
Datum
base32uint8base32uint4mi(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint64 result;

	result = arg1 - arg2;

	if (result > arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8_to_base32uint4);
Datum
base32uint8_to_base32uint4(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint32 result;

	result = arg1;
	if ((uint64) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint4 out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8lt);
Datum
base32uint8base32uint8lt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8le);
Datum
base32uint8base32uint8le(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8eq);
Datum
base32uint8base32uint8eq(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8ne);
Datum
base32uint8base32uint8ne(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8ge);
Datum
base32uint8base32uint8ge(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8gt);
Datum
base32uint8base32uint8gt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint8base32uint8cmp);
Datum
btbase32uint8base32uint8cmp(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8pl);
Datum
base32uint8base32uint8pl(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 + arg2;

	if (result < arg1 || result < arg2)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8mi);
Datum
base32uint8base32uint8mi(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 - arg2;

	if (result > arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8int2lt);
Datum
base32uint8int2lt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int2le);
Datum
base32uint8int2le(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int2eq);
Datum
base32uint8int2eq(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int2ne);
Datum
base32uint8int2ne(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int2ge);
Datum
base32uint8int2ge(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int2gt);
Datum
base32uint8int2gt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 arg2 = PG_GETARG_INT16(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint8int2cmp);
Datum
btbase32uint8int2cmp(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 arg2 = PG_GETARG_INT16(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint8int2pl);
Datum
base32uint8int2pl(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 arg2 = PG_GETARG_INT16(1);
	uint64 result;

	result = arg1 + arg2;

	if ((arg2 < 0 && result > arg1) || (arg2 > 0 && result < arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8int2mi);
Datum
base32uint8int2mi(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 arg2 = PG_GETARG_INT16(1);
	uint64 result;

	result = arg1 - arg2;

	if ((arg2 < 0 && result < arg1) || (arg2 > 0 && result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8_to_int2);
Datum
base32uint8_to_int2(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int16 result;

	result = arg1;
	if ((uint64) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int2 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int2 out of range")));

	PG_RETURN_INT16(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4lt);
Datum
base32uint8int4lt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4le);
Datum
base32uint8int4le(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4eq);
Datum
base32uint8int4eq(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4ne);
Datum
base32uint8int4ne(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4ge);
Datum
base32uint8int4ge(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4gt);
Datum
base32uint8int4gt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint8int4cmp);
Datum
btbase32uint8int4cmp(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4pl);
Datum
base32uint8int4pl(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint64 result;

	result = arg1 + arg2;

	if ((arg2 < 0 && result > arg1) || (arg2 > 0 && result < arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4mi);
Datum
base32uint8int4mi(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint64 result;

	result = arg1 - arg2;

	if ((arg2 < 0 && result < arg1) || (arg2 > 0 && result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8_to_int4);
Datum
base32uint8_to_int4(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 result;

	result = arg1;
	if ((uint64) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int4 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int4 out of range")));

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint8int8lt);
Datum
base32uint8int8lt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int8le);
Datum
base32uint8int8le(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int8eq);
Datum
base32uint8int8eq(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int8ne);
Datum
base32uint8int8ne(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int8ge);
Datum
base32uint8int8ge(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(base32uint8int8gt);
Datum
base32uint8int8gt(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 arg2 = PG_GETARG_INT64(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btbase32uint8int8cmp);
Datum
btbase32uint8int8cmp(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 arg2 = PG_GETARG_INT64(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(base32uint8int8pl);
Datum
base32uint8int8pl(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 arg2 = PG_GETARG_INT64(1);
	uint64 result;

	result = arg1 + arg2;

	if ((arg2 < 0 && result > arg1) || (arg2 > 0 && result < arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8int8mi);
Datum
base32uint8int8mi(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 arg2 = PG_GETARG_INT64(1);
	uint64 result;

	result = arg1 - arg2;

	if ((arg2 < 0 && result < arg1) || (arg2 > 0 && result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8_to_int8);
Datum
base32uint8_to_int8(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int64 result;

	result = arg1;
	if ((uint64) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int8 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("int8 out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(int2base32uint2lt);
Datum
int2base32uint2lt(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint2le);
Datum
int2base32uint2le(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint2eq);
Datum
int2base32uint2eq(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint2ne);
Datum
int2base32uint2ne(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint2ge);
Datum
int2base32uint2ge(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint2gt);
Datum
int2base32uint2gt(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btint2base32uint2cmp);
Datum
btint2base32uint2cmp(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int2base32uint2pl);
Datum
int2base32uint2pl(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint16 result;

	result = arg1 + arg2;

	if ((arg1 < 0 && result > arg2) || (arg1 > 0 && result < arg2))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(int2base32uint2mi);
Datum
int2base32uint2mi(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint16 result;

	result = arg1 - arg2;

	if ((arg1 < 0) || (result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(int2_to_base32uint2);
Datum
int2_to_base32uint2(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint16 result;

	result = arg1;
	if ((int16) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint2 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint2 out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(int2base32uint4lt);
Datum
int2base32uint4lt(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint4le);
Datum
int2base32uint4le(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint4eq);
Datum
int2base32uint4eq(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint4ne);
Datum
int2base32uint4ne(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint4ge);
Datum
int2base32uint4ge(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint4gt);
Datum
int2base32uint4gt(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btint2base32uint4cmp);
Datum
btint2base32uint4cmp(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int2base32uint4pl);
Datum
int2base32uint4pl(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 + arg2;

	if ((arg1 < 0 && result > arg2) || (arg1 > 0 && result < arg2))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(int2base32uint4mi);
Datum
int2base32uint4mi(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 - arg2;

	if ((arg1 < 0) || (result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(int2_to_base32uint4);
Datum
int2_to_base32uint4(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint32 result;

	result = arg1;
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint4 out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(int2base32uint8lt);
Datum
int2base32uint8lt(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint8le);
Datum
int2base32uint8le(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint8eq);
Datum
int2base32uint8eq(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint8ne);
Datum
int2base32uint8ne(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint8ge);
Datum
int2base32uint8ge(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int2base32uint8gt);
Datum
int2base32uint8gt(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btint2base32uint8cmp);
Datum
btint2base32uint8cmp(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int2base32uint8pl);
Datum
int2base32uint8pl(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 + arg2;

	if ((arg1 < 0 && result > arg2) || (arg1 > 0 && result < arg2))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(int2base32uint8mi);
Datum
int2base32uint8mi(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 - arg2;

	if ((arg1 < 0) || (result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(int2_to_base32uint8);
Datum
int2_to_base32uint8(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	uint64 result;

	result = arg1;
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint8 out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(int4base32uint2lt);
Datum
int4base32uint2lt(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint2le);
Datum
int4base32uint2le(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint2eq);
Datum
int4base32uint2eq(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint2ne);
Datum
int4base32uint2ne(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint2ge);
Datum
int4base32uint2ge(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint2gt);
Datum
int4base32uint2gt(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btint4base32uint2cmp);
Datum
btint4base32uint2cmp(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int4base32uint2pl);
Datum
int4base32uint2pl(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int32 result;

	result = arg1 + arg2;

	if (SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int4base32uint2mi);
Datum
int4base32uint2mi(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int32 result;

	result = arg1 - arg2;

	if (!SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int4_to_base32uint2);
Datum
int4_to_base32uint2(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint16 result;

	result = arg1;
	if ((int32) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint2 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint2 out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(int4base32uint4lt);
Datum
int4base32uint4lt(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint4le);
Datum
int4base32uint4le(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint4eq);
Datum
int4base32uint4eq(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint4ne);
Datum
int4base32uint4ne(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint4ge);
Datum
int4base32uint4ge(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint4gt);
Datum
int4base32uint4gt(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btint4base32uint4cmp);
Datum
btint4base32uint4cmp(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int4base32uint4pl);
Datum
int4base32uint4pl(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 + arg2;

	if ((arg1 < 0 && result > arg2) || (arg1 > 0 && result < arg2))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(int4base32uint4mi);
Datum
int4base32uint4mi(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 - arg2;

	if ((arg1 < 0) || (result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(int4_to_base32uint4);
Datum
int4_to_base32uint4(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint32 result;

	result = arg1;
	if ((int32) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint4 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint4 out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(int4base32uint8lt);
Datum
int4base32uint8lt(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint8le);
Datum
int4base32uint8le(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint8eq);
Datum
int4base32uint8eq(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint8ne);
Datum
int4base32uint8ne(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint8ge);
Datum
int4base32uint8ge(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int4base32uint8gt);
Datum
int4base32uint8gt(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btint4base32uint8cmp);
Datum
btint4base32uint8cmp(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int4base32uint8pl);
Datum
int4base32uint8pl(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 + arg2;

	if ((arg1 < 0 && result > arg2) || (arg1 > 0 && result < arg2))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(int4base32uint8mi);
Datum
int4base32uint8mi(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 - arg2;

	if ((arg1 < 0) || (result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(int4_to_base32uint8);
Datum
int4_to_base32uint8(PG_FUNCTION_ARGS)
{
	int32 arg1 = PG_GETARG_INT32(0);
	uint64 result;

	result = arg1;
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint8 out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(int8base32uint2lt);
Datum
int8base32uint2lt(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint2le);
Datum
int8base32uint2le(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint2eq);
Datum
int8base32uint2eq(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint2ne);
Datum
int8base32uint2ne(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint2ge);
Datum
int8base32uint2ge(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint2gt);
Datum
int8base32uint2gt(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btint8base32uint2cmp);
Datum
btint8base32uint2cmp(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int8base32uint2pl);
Datum
int8base32uint2pl(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int64 result;

	result = arg1 + arg2;

	if (SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(int8base32uint2mi);
Datum
int8base32uint2mi(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	int64 result;

	result = arg1 - arg2;

	if (!SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(int8_to_base32uint2);
Datum
int8_to_base32uint2(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint16 result;

	result = arg1;
	if ((int64) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint2 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint2 out of range")));

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(int8base32uint4lt);
Datum
int8base32uint4lt(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint4le);
Datum
int8base32uint4le(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint4eq);
Datum
int8base32uint4eq(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint4ne);
Datum
int8base32uint4ne(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint4ge);
Datum
int8base32uint4ge(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint4gt);
Datum
int8base32uint4gt(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btint8base32uint4cmp);
Datum
btint8base32uint4cmp(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int8base32uint4pl);
Datum
int8base32uint4pl(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	int64 result;

	result = arg1 + arg2;

	if (SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(int8base32uint4mi);
Datum
int8base32uint4mi(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	int64 result;

	result = arg1 - arg2;

	if (!SAMESIGN(arg1, arg2) && !SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_INT64(result);
}

PG_FUNCTION_INFO_V1(int8_to_base32uint4);
Datum
int8_to_base32uint4(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint32 result;

	result = arg1;
	if ((int64) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint4 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint4 out of range")));

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(int8base32uint8lt);
Datum
int8base32uint8lt(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 < arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint8le);
Datum
int8base32uint8le(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 <= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint8eq);
Datum
int8base32uint8eq(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 == arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint8ne);
Datum
int8base32uint8ne(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 != arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint8ge);
Datum
int8base32uint8ge(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 >= arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(int8base32uint8gt);
Datum
int8base32uint8gt(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	bool result;

	result = arg1 > arg2;

	PG_RETURN_BOOL(result);
}

PG_FUNCTION_INFO_V1(btint8base32uint8cmp);
Datum
btint8base32uint8cmp(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	int32 result;

	if (arg1 > arg2)
		result = 1;
	else if (arg1 == arg2)
		result = 0;
	else
		result = -1;

	PG_RETURN_INT32(result);
}

PG_FUNCTION_INFO_V1(int8base32uint8pl);
Datum
int8base32uint8pl(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 + arg2;

	if ((arg1 < 0 && result > arg2) || (arg1 > 0 && result < arg2))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(int8base32uint8mi);
Datum
int8base32uint8mi(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 - arg2;

	if ((arg1 < 0) || (result > arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("integer out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(int8_to_base32uint8);
Datum
int8_to_base32uint8(PG_FUNCTION_ARGS)
{
	int64 arg1 = PG_GETARG_INT64(0);
	uint64 result;

	result = arg1;
	if ((int64) result != arg1)
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint8 out of range")));
	if (!SAMESIGN(result, arg1))
		ereport(ERROR,
			(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
			 errmsg("base32uint8 out of range")));

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2and);
Datum
base32uint2base32uint2and(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint16 result;

	result = arg1 & arg2;

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2or);
Datum
base32uint2base32uint2or(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint16 result;

	result = arg1 | arg2;

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2base32uint2xor);
Datum
base32uint2base32uint2xor(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint16 result;

	result = arg1 ^ arg2;

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2not);
Datum
base32uint2not(PG_FUNCTION_ARGS)
{
	uint16 arg2 = PG_GETARG_UINT16(0);
	uint16 result;

	result =  ~ arg2;

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4shl);
Datum
base32uint2int4shl(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint16 result;

	result = arg1 << arg2;

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2int4shr);
Datum
base32uint2int4shr(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint16 result;

	result = arg1 >> arg2;

	PG_RETURN_UINT16(result);
}

static int
btbase32uint2fastcmp(Datum x, Datum y, SortSupport ssup)
{
	uint16 a = DatumGetUInt16(x);
	uint16 b = DatumGetUInt16(y);

	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}

PG_FUNCTION_INFO_V1(btbase32uint2sortsupport);
Datum
btbase32uint2sortsupport(PG_FUNCTION_ARGS)
{
	SortSupport ssup = (SortSupport) PG_GETARG_POINTER(0);

	ssup->comparator = btbase32uint2fastcmp;
	PG_RETURN_VOID();
}

PG_FUNCTION_INFO_V1(base32uint2smaller);
Datum
base32uint2smaller(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint16 result;

	result = (arg1 < arg2) ? arg1 : arg2;

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint2larger);
Datum
base32uint2larger(PG_FUNCTION_ARGS)
{
	uint16 arg1 = PG_GETARG_UINT16(0);
	uint16 arg2 = PG_GETARG_UINT16(1);
	uint16 result;

	result = (arg1 > arg2) ? arg1 : arg2;

	PG_RETURN_UINT16(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4and);
Datum
base32uint4base32uint4and(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 & arg2;

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4or);
Datum
base32uint4base32uint4or(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 | arg2;

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4base32uint4xor);
Datum
base32uint4base32uint4xor(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = arg1 ^ arg2;

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4not);
Datum
base32uint4not(PG_FUNCTION_ARGS)
{
	uint32 arg2 = PG_GETARG_UINT32(0);
	uint32 result;

	result =  ~ arg2;

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4shl);
Datum
base32uint4int4shl(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint32 result;

	result = arg1 << arg2;

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4int4shr);
Datum
base32uint4int4shr(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint32 result;

	result = arg1 >> arg2;

	PG_RETURN_UINT32(result);
}

static int
btbase32uint4fastcmp(Datum x, Datum y, SortSupport ssup)
{
	uint32 a = DatumGetUInt32(x);
	uint32 b = DatumGetUInt32(y);

	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}

PG_FUNCTION_INFO_V1(btbase32uint4sortsupport);
Datum
btbase32uint4sortsupport(PG_FUNCTION_ARGS)
{
	SortSupport ssup = (SortSupport) PG_GETARG_POINTER(0);

	ssup->comparator = btbase32uint4fastcmp;
	PG_RETURN_VOID();
}

PG_FUNCTION_INFO_V1(base32uint4smaller);
Datum
base32uint4smaller(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = (arg1 < arg2) ? arg1 : arg2;

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint4larger);
Datum
base32uint4larger(PG_FUNCTION_ARGS)
{
	uint32 arg1 = PG_GETARG_UINT32(0);
	uint32 arg2 = PG_GETARG_UINT32(1);
	uint32 result;

	result = (arg1 > arg2) ? arg1 : arg2;

	PG_RETURN_UINT32(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8and);
Datum
base32uint8base32uint8and(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 & arg2;

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8or);
Datum
base32uint8base32uint8or(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 | arg2;

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8base32uint8xor);
Datum
base32uint8base32uint8xor(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = arg1 ^ arg2;

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8not);
Datum
base32uint8not(PG_FUNCTION_ARGS)
{
	uint64 arg2 = PG_GETARG_UINT64(0);
	uint64 result;

	result =  ~ arg2;

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4shl);
Datum
base32uint8int4shl(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint64 result;

	result = arg1 << arg2;

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8int4shr);
Datum
base32uint8int4shr(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	int32 arg2 = PG_GETARG_INT32(1);
	uint64 result;

	result = arg1 >> arg2;

	PG_RETURN_UINT64(result);
}

static int
btbase32uint8fastcmp(Datum x, Datum y, SortSupport ssup)
{
	uint64 a = DatumGetUInt64(x);
	uint64 b = DatumGetUInt64(y);

	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}

PG_FUNCTION_INFO_V1(btbase32uint8sortsupport);
Datum
btbase32uint8sortsupport(PG_FUNCTION_ARGS)
{
	SortSupport ssup = (SortSupport) PG_GETARG_POINTER(0);

	ssup->comparator = btbase32uint8fastcmp;
	PG_RETURN_VOID();
}

PG_FUNCTION_INFO_V1(base32uint8smaller);
Datum
base32uint8smaller(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = (arg1 < arg2) ? arg1 : arg2;

	PG_RETURN_UINT64(result);
}

PG_FUNCTION_INFO_V1(base32uint8larger);
Datum
base32uint8larger(PG_FUNCTION_ARGS)
{
	uint64 arg1 = PG_GETARG_UINT64(0);
	uint64 arg2 = PG_GETARG_UINT64(1);
	uint64 result;

	result = (arg1 > arg2) ? arg1 : arg2;

	PG_RETURN_UINT64(result);
}
