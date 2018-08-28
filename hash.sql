CREATE FUNCTION hashbase32uint2(base32uint2) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'hashbase32uint2';
CREATE FUNCTION hashbase32uint4(base32uint4) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'hashbase32uint4';
CREATE FUNCTION hashbase32uint8(base32uint8) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'hashbase32uint8';
