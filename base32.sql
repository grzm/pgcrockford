\echo Use "CREATE EXTENSION base32" to load this file. \quit

CREATE TYPE base32uint2;

CREATE FUNCTION base32uint2in(cstring) RETURNS base32uint2
IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2in';

CREATE FUNCTION base32uint2out(base32uint2) RETURNS cstring
IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2out';

CREATE TYPE base32uint2 (
  INPUT = base32uint2in,
  OUTPUT = base32uint2out,
  INTERNALLENGTH = 2,
  PASSEDBYVALUE,
  ALIGNMENT = int2
);


CREATE TYPE base32uint4;

CREATE FUNCTION base32uint4in(cstring) RETURNS base32uint4
IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4in';

CREATE FUNCTION base32uint4out(base32uint4) RETURNS cstring
IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4out';

CREATE TYPE base32uint4 (
  INPUT = base32uint4in,
  OUTPUT = base32uint4out,
  INTERNALLENGTH = 4,
  PASSEDBYVALUE,
  ALIGNMENT = int4
);

CREATE TYPE base32uint8;


CREATE FUNCTION base32uint8in(cstring) RETURNS base32uint8
IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8in';

CREATE FUNCTION base32uint8out(base32uint8) RETURNS cstring
IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8out';

CREATE TYPE base32uint8 (
  INPUT = base32uint8in,
  OUTPUT = base32uint8out,
  INTERNALLENGTH = 8,
  @UINT8_PASSEDBYVALUE@
  ALIGNMENT = double
);
