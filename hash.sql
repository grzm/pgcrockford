CREATE FUNCTION hashcrockford2(crockford2) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'hashcrockford2';
CREATE FUNCTION hashcrockford4(crockford4) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'hashcrockford4';
CREATE FUNCTION hashcrockford8(crockford8) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'hashcrockford8';
