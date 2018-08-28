CREATE FUNCTION base32uint2base32uint2lt(base32uint2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2lt';

CREATE OPERATOR < (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2base32uint2lt
);

CREATE FUNCTION base32uint2base32uint2le(base32uint2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2le';

CREATE OPERATOR <= (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2base32uint2le
);

CREATE FUNCTION base32uint2base32uint2eq(base32uint2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2eq';

CREATE OPERATOR = (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint2base32uint2eq
);

CREATE FUNCTION base32uint2base32uint2ne(base32uint2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint2base32uint2ne
);

CREATE FUNCTION base32uint2base32uint2ge(base32uint2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2base32uint2ge
);

CREATE FUNCTION base32uint2base32uint2gt(base32uint2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2gt';

CREATE OPERATOR > (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2base32uint2gt
);

CREATE FUNCTION btbase32uint2base32uint2cmp(base32uint2, base32uint2) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint2base32uint2cmp';

CREATE FUNCTION base32uint2base32uint2pl(base32uint2, base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2pl';

CREATE OPERATOR + (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = +,
    PROCEDURE = base32uint2base32uint2pl
);

CREATE FUNCTION base32uint2base32uint2mi(base32uint2, base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2mi';

CREATE OPERATOR - (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    PROCEDURE = base32uint2base32uint2mi
);

CREATE FUNCTION base32uint2base32uint4lt(base32uint2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint4lt';

CREATE OPERATOR < (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint4,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2base32uint4lt
);

CREATE FUNCTION base32uint2base32uint4le(base32uint2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint4le';

CREATE OPERATOR <= (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint4,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2base32uint4le
);

CREATE FUNCTION base32uint2base32uint4eq(base32uint2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint4eq';

CREATE OPERATOR = (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint4,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint2base32uint4eq
);

CREATE FUNCTION base32uint2base32uint4ne(base32uint2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint4ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint4,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint2base32uint4ne
);

CREATE FUNCTION base32uint2base32uint4ge(base32uint2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint4ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint4,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2base32uint4ge
);

CREATE FUNCTION base32uint2base32uint4gt(base32uint2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint4gt';

CREATE OPERATOR > (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint4,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2base32uint4gt
);

CREATE FUNCTION btbase32uint2base32uint4cmp(base32uint2, base32uint4) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint2base32uint4cmp';

CREATE FUNCTION base32uint2base32uint4pl(base32uint2, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint4pl';

CREATE OPERATOR + (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint4,
    COMMUTATOR = +,
    PROCEDURE = base32uint2base32uint4pl
);

CREATE FUNCTION base32uint2base32uint4mi(base32uint2, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint4mi';

CREATE OPERATOR - (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint4,
    PROCEDURE = base32uint2base32uint4mi
);

CREATE FUNCTION base32uint4(base32uint2) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2_to_base32uint4';

CREATE CAST (base32uint2 AS base32uint4) WITH FUNCTION base32uint4(base32uint2) AS IMPLICIT;

CREATE FUNCTION base32uint2base32uint8lt(base32uint2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint8lt';

CREATE OPERATOR < (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint8,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2base32uint8lt
);

CREATE FUNCTION base32uint2base32uint8le(base32uint2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint8le';

CREATE OPERATOR <= (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint8,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2base32uint8le
);

CREATE FUNCTION base32uint2base32uint8eq(base32uint2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint8eq';

CREATE OPERATOR = (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint8,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint2base32uint8eq
);

CREATE FUNCTION base32uint2base32uint8ne(base32uint2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint8ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint8,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint2base32uint8ne
);

CREATE FUNCTION base32uint2base32uint8ge(base32uint2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint8ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint8,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2base32uint8ge
);

CREATE FUNCTION base32uint2base32uint8gt(base32uint2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint8gt';

CREATE OPERATOR > (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint8,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2base32uint8gt
);

CREATE FUNCTION btbase32uint2base32uint8cmp(base32uint2, base32uint8) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint2base32uint8cmp';

CREATE FUNCTION base32uint2base32uint8pl(base32uint2, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint8pl';

CREATE OPERATOR + (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint8,
    COMMUTATOR = +,
    PROCEDURE = base32uint2base32uint8pl
);

CREATE FUNCTION base32uint2base32uint8mi(base32uint2, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint8mi';

CREATE OPERATOR - (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint8,
    PROCEDURE = base32uint2base32uint8mi
);

CREATE FUNCTION base32uint8(base32uint2) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2_to_base32uint8';

CREATE CAST (base32uint2 AS base32uint8) WITH FUNCTION base32uint8(base32uint2) AS IMPLICIT;

CREATE FUNCTION base32uint2int2lt(base32uint2, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int2lt';

CREATE OPERATOR < (
    LEFTARG = base32uint2,
    RIGHTARG = int2,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2int2lt
);

CREATE FUNCTION base32uint2int2le(base32uint2, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int2le';

CREATE OPERATOR <= (
    LEFTARG = base32uint2,
    RIGHTARG = int2,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2int2le
);

CREATE FUNCTION base32uint2int2eq(base32uint2, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int2eq';

CREATE OPERATOR = (
    LEFTARG = base32uint2,
    RIGHTARG = int2,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint2int2eq
);

CREATE FUNCTION base32uint2int2ne(base32uint2, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int2ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint2,
    RIGHTARG = int2,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint2int2ne
);

CREATE FUNCTION base32uint2int2ge(base32uint2, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int2ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint2,
    RIGHTARG = int2,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2int2ge
);

CREATE FUNCTION base32uint2int2gt(base32uint2, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int2gt';

CREATE OPERATOR > (
    LEFTARG = base32uint2,
    RIGHTARG = int2,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2int2gt
);

CREATE FUNCTION btbase32uint2int2cmp(base32uint2, int2) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint2int2cmp';

CREATE FUNCTION base32uint2int2pl(base32uint2, int2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int2pl';

CREATE OPERATOR + (
    LEFTARG = base32uint2,
    RIGHTARG = int2,
    COMMUTATOR = +,
    PROCEDURE = base32uint2int2pl
);

CREATE FUNCTION base32uint2int2mi(base32uint2, int2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int2mi';

CREATE OPERATOR - (
    LEFTARG = base32uint2,
    RIGHTARG = int2,
    PROCEDURE = base32uint2int2mi
);

CREATE FUNCTION int2(base32uint2) RETURNS int2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2_to_int2';

CREATE CAST (base32uint2 AS int2) WITH FUNCTION int2(base32uint2) AS ASSIGNMENT;

CREATE FUNCTION base32uint2int4lt(base32uint2, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4lt';

CREATE OPERATOR < (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2int4lt
);

CREATE FUNCTION base32uint2int4le(base32uint2, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4le';

CREATE OPERATOR <= (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2int4le
);

CREATE FUNCTION base32uint2int4eq(base32uint2, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4eq';

CREATE OPERATOR = (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint2int4eq
);

CREATE FUNCTION base32uint2int4ne(base32uint2, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint2int4ne
);

CREATE FUNCTION base32uint2int4ge(base32uint2, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2int4ge
);

CREATE FUNCTION base32uint2int4gt(base32uint2, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4gt';

CREATE OPERATOR > (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2int4gt
);

CREATE FUNCTION btbase32uint2int4cmp(base32uint2, int4) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint2int4cmp';

CREATE FUNCTION base32uint2int4pl(base32uint2, int4) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4pl';

CREATE OPERATOR + (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    COMMUTATOR = +,
    PROCEDURE = base32uint2int4pl
);

CREATE FUNCTION base32uint2int4mi(base32uint2, int4) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4mi';

CREATE OPERATOR - (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    PROCEDURE = base32uint2int4mi
);

CREATE FUNCTION int4(base32uint2) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2_to_int4';

CREATE CAST (base32uint2 AS int4) WITH FUNCTION int4(base32uint2) AS IMPLICIT;

CREATE FUNCTION base32uint2int8lt(base32uint2, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int8lt';

CREATE OPERATOR < (
    LEFTARG = base32uint2,
    RIGHTARG = int8,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2int8lt
);

CREATE FUNCTION base32uint2int8le(base32uint2, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int8le';

CREATE OPERATOR <= (
    LEFTARG = base32uint2,
    RIGHTARG = int8,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint2int8le
);

CREATE FUNCTION base32uint2int8eq(base32uint2, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int8eq';

CREATE OPERATOR = (
    LEFTARG = base32uint2,
    RIGHTARG = int8,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint2int8eq
);

CREATE FUNCTION base32uint2int8ne(base32uint2, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int8ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint2,
    RIGHTARG = int8,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint2int8ne
);

CREATE FUNCTION base32uint2int8ge(base32uint2, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int8ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint2,
    RIGHTARG = int8,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2int8ge
);

CREATE FUNCTION base32uint2int8gt(base32uint2, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int8gt';

CREATE OPERATOR > (
    LEFTARG = base32uint2,
    RIGHTARG = int8,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint2int8gt
);

CREATE FUNCTION btbase32uint2int8cmp(base32uint2, int8) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint2int8cmp';

CREATE FUNCTION base32uint2int8pl(base32uint2, int8) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int8pl';

CREATE OPERATOR + (
    LEFTARG = base32uint2,
    RIGHTARG = int8,
    COMMUTATOR = +,
    PROCEDURE = base32uint2int8pl
);

CREATE FUNCTION base32uint2int8mi(base32uint2, int8) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int8mi';

CREATE OPERATOR - (
    LEFTARG = base32uint2,
    RIGHTARG = int8,
    PROCEDURE = base32uint2int8mi
);

CREATE FUNCTION int8(base32uint2) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2_to_int8';

CREATE CAST (base32uint2 AS int8) WITH FUNCTION int8(base32uint2) AS IMPLICIT;

CREATE FUNCTION base32uint4base32uint2lt(base32uint4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint2lt';

CREATE OPERATOR < (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint2,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4base32uint2lt
);

CREATE FUNCTION base32uint4base32uint2le(base32uint4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint2le';

CREATE OPERATOR <= (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint2,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4base32uint2le
);

CREATE FUNCTION base32uint4base32uint2eq(base32uint4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint2eq';

CREATE OPERATOR = (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint2,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint4base32uint2eq
);

CREATE FUNCTION base32uint4base32uint2ne(base32uint4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint2ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint2,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint4base32uint2ne
);

CREATE FUNCTION base32uint4base32uint2ge(base32uint4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint2ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint2,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4base32uint2ge
);

CREATE FUNCTION base32uint4base32uint2gt(base32uint4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint2gt';

CREATE OPERATOR > (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint2,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4base32uint2gt
);

CREATE FUNCTION btbase32uint4base32uint2cmp(base32uint4, base32uint2) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint4base32uint2cmp';

CREATE FUNCTION base32uint4base32uint2pl(base32uint4, base32uint2) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint2pl';

CREATE OPERATOR + (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint2,
    COMMUTATOR = +,
    PROCEDURE = base32uint4base32uint2pl
);

CREATE FUNCTION base32uint4base32uint2mi(base32uint4, base32uint2) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint2mi';

CREATE OPERATOR - (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint2,
    PROCEDURE = base32uint4base32uint2mi
);

CREATE FUNCTION base32uint2(base32uint4) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4_to_base32uint2';

CREATE CAST (base32uint4 AS base32uint2) WITH FUNCTION base32uint2(base32uint4) AS ASSIGNMENT;

CREATE FUNCTION base32uint4base32uint4lt(base32uint4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4lt';

CREATE OPERATOR < (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4base32uint4lt
);

CREATE FUNCTION base32uint4base32uint4le(base32uint4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4le';

CREATE OPERATOR <= (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4base32uint4le
);

CREATE FUNCTION base32uint4base32uint4eq(base32uint4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4eq';

CREATE OPERATOR = (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint4base32uint4eq
);

CREATE FUNCTION base32uint4base32uint4ne(base32uint4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint4base32uint4ne
);

CREATE FUNCTION base32uint4base32uint4ge(base32uint4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4base32uint4ge
);

CREATE FUNCTION base32uint4base32uint4gt(base32uint4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4gt';

CREATE OPERATOR > (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4base32uint4gt
);

CREATE FUNCTION btbase32uint4base32uint4cmp(base32uint4, base32uint4) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint4base32uint4cmp';

CREATE FUNCTION base32uint4base32uint4pl(base32uint4, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4pl';

CREATE OPERATOR + (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = +,
    PROCEDURE = base32uint4base32uint4pl
);

CREATE FUNCTION base32uint4base32uint4mi(base32uint4, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4mi';

CREATE OPERATOR - (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    PROCEDURE = base32uint4base32uint4mi
);

CREATE FUNCTION base32uint4base32uint8lt(base32uint4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint8lt';

CREATE OPERATOR < (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint8,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4base32uint8lt
);

CREATE FUNCTION base32uint4base32uint8le(base32uint4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint8le';

CREATE OPERATOR <= (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint8,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4base32uint8le
);

CREATE FUNCTION base32uint4base32uint8eq(base32uint4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint8eq';

CREATE OPERATOR = (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint8,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint4base32uint8eq
);

CREATE FUNCTION base32uint4base32uint8ne(base32uint4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint8ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint8,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint4base32uint8ne
);

CREATE FUNCTION base32uint4base32uint8ge(base32uint4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint8ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint8,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4base32uint8ge
);

CREATE FUNCTION base32uint4base32uint8gt(base32uint4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint8gt';

CREATE OPERATOR > (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint8,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4base32uint8gt
);

CREATE FUNCTION btbase32uint4base32uint8cmp(base32uint4, base32uint8) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint4base32uint8cmp';

CREATE FUNCTION base32uint4base32uint8pl(base32uint4, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint8pl';

CREATE OPERATOR + (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint8,
    COMMUTATOR = +,
    PROCEDURE = base32uint4base32uint8pl
);

CREATE FUNCTION base32uint4base32uint8mi(base32uint4, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint8mi';

CREATE OPERATOR - (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint8,
    PROCEDURE = base32uint4base32uint8mi
);

CREATE FUNCTION base32uint8(base32uint4) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4_to_base32uint8';

CREATE CAST (base32uint4 AS base32uint8) WITH FUNCTION base32uint8(base32uint4) AS IMPLICIT;

CREATE FUNCTION base32uint4int2lt(base32uint4, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int2lt';

CREATE OPERATOR < (
    LEFTARG = base32uint4,
    RIGHTARG = int2,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4int2lt
);

CREATE FUNCTION base32uint4int2le(base32uint4, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int2le';

CREATE OPERATOR <= (
    LEFTARG = base32uint4,
    RIGHTARG = int2,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4int2le
);

CREATE FUNCTION base32uint4int2eq(base32uint4, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int2eq';

CREATE OPERATOR = (
    LEFTARG = base32uint4,
    RIGHTARG = int2,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint4int2eq
);

CREATE FUNCTION base32uint4int2ne(base32uint4, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int2ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint4,
    RIGHTARG = int2,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint4int2ne
);

CREATE FUNCTION base32uint4int2ge(base32uint4, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int2ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint4,
    RIGHTARG = int2,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4int2ge
);

CREATE FUNCTION base32uint4int2gt(base32uint4, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int2gt';

CREATE OPERATOR > (
    LEFTARG = base32uint4,
    RIGHTARG = int2,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4int2gt
);

CREATE FUNCTION btbase32uint4int2cmp(base32uint4, int2) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint4int2cmp';

CREATE FUNCTION base32uint4int2pl(base32uint4, int2) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int2pl';

CREATE OPERATOR + (
    LEFTARG = base32uint4,
    RIGHTARG = int2,
    COMMUTATOR = +,
    PROCEDURE = base32uint4int2pl
);

CREATE FUNCTION base32uint4int2mi(base32uint4, int2) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int2mi';

CREATE OPERATOR - (
    LEFTARG = base32uint4,
    RIGHTARG = int2,
    PROCEDURE = base32uint4int2mi
);

CREATE FUNCTION int2(base32uint4) RETURNS int2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4_to_int2';

CREATE CAST (base32uint4 AS int2) WITH FUNCTION int2(base32uint4) AS ASSIGNMENT;

CREATE FUNCTION base32uint4int4lt(base32uint4, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4lt';

CREATE OPERATOR < (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4int4lt
);

CREATE FUNCTION base32uint4int4le(base32uint4, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4le';

CREATE OPERATOR <= (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4int4le
);

CREATE FUNCTION base32uint4int4eq(base32uint4, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4eq';

CREATE OPERATOR = (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint4int4eq
);

CREATE FUNCTION base32uint4int4ne(base32uint4, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint4int4ne
);

CREATE FUNCTION base32uint4int4ge(base32uint4, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4int4ge
);

CREATE FUNCTION base32uint4int4gt(base32uint4, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4gt';

CREATE OPERATOR > (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4int4gt
);

CREATE FUNCTION btbase32uint4int4cmp(base32uint4, int4) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint4int4cmp';

CREATE FUNCTION base32uint4int4pl(base32uint4, int4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4pl';

CREATE OPERATOR + (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    COMMUTATOR = +,
    PROCEDURE = base32uint4int4pl
);

CREATE FUNCTION base32uint4int4mi(base32uint4, int4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4mi';

CREATE OPERATOR - (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    PROCEDURE = base32uint4int4mi
);

CREATE FUNCTION int4(base32uint4) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4_to_int4';

CREATE CAST (base32uint4 AS int4) WITH FUNCTION int4(base32uint4) AS ASSIGNMENT;

CREATE FUNCTION base32uint4int8lt(base32uint4, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int8lt';

CREATE OPERATOR < (
    LEFTARG = base32uint4,
    RIGHTARG = int8,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4int8lt
);

CREATE FUNCTION base32uint4int8le(base32uint4, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int8le';

CREATE OPERATOR <= (
    LEFTARG = base32uint4,
    RIGHTARG = int8,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint4int8le
);

CREATE FUNCTION base32uint4int8eq(base32uint4, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int8eq';

CREATE OPERATOR = (
    LEFTARG = base32uint4,
    RIGHTARG = int8,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint4int8eq
);

CREATE FUNCTION base32uint4int8ne(base32uint4, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int8ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint4,
    RIGHTARG = int8,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint4int8ne
);

CREATE FUNCTION base32uint4int8ge(base32uint4, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int8ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint4,
    RIGHTARG = int8,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4int8ge
);

CREATE FUNCTION base32uint4int8gt(base32uint4, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int8gt';

CREATE OPERATOR > (
    LEFTARG = base32uint4,
    RIGHTARG = int8,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint4int8gt
);

CREATE FUNCTION btbase32uint4int8cmp(base32uint4, int8) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint4int8cmp';

CREATE FUNCTION base32uint4int8pl(base32uint4, int8) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int8pl';

CREATE OPERATOR + (
    LEFTARG = base32uint4,
    RIGHTARG = int8,
    COMMUTATOR = +,
    PROCEDURE = base32uint4int8pl
);

CREATE FUNCTION base32uint4int8mi(base32uint4, int8) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int8mi';

CREATE OPERATOR - (
    LEFTARG = base32uint4,
    RIGHTARG = int8,
    PROCEDURE = base32uint4int8mi
);

CREATE FUNCTION int8(base32uint4) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4_to_int8';

CREATE CAST (base32uint4 AS int8) WITH FUNCTION int8(base32uint4) AS IMPLICIT;

CREATE FUNCTION base32uint8base32uint2lt(base32uint8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint2lt';

CREATE OPERATOR < (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint2,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8base32uint2lt
);

CREATE FUNCTION base32uint8base32uint2le(base32uint8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint2le';

CREATE OPERATOR <= (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint2,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8base32uint2le
);

CREATE FUNCTION base32uint8base32uint2eq(base32uint8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint2eq';

CREATE OPERATOR = (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint2,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint8base32uint2eq
);

CREATE FUNCTION base32uint8base32uint2ne(base32uint8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint2ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint2,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint8base32uint2ne
);

CREATE FUNCTION base32uint8base32uint2ge(base32uint8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint2ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint2,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8base32uint2ge
);

CREATE FUNCTION base32uint8base32uint2gt(base32uint8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint2gt';

CREATE OPERATOR > (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint2,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8base32uint2gt
);

CREATE FUNCTION btbase32uint8base32uint2cmp(base32uint8, base32uint2) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint8base32uint2cmp';

CREATE FUNCTION base32uint8base32uint2pl(base32uint8, base32uint2) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint2pl';

CREATE OPERATOR + (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint2,
    COMMUTATOR = +,
    PROCEDURE = base32uint8base32uint2pl
);

CREATE FUNCTION base32uint8base32uint2mi(base32uint8, base32uint2) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint2mi';

CREATE OPERATOR - (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint2,
    PROCEDURE = base32uint8base32uint2mi
);

CREATE FUNCTION base32uint2(base32uint8) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8_to_base32uint2';

CREATE CAST (base32uint8 AS base32uint2) WITH FUNCTION base32uint2(base32uint8) AS ASSIGNMENT;

CREATE FUNCTION base32uint8base32uint4lt(base32uint8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint4lt';

CREATE OPERATOR < (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint4,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8base32uint4lt
);

CREATE FUNCTION base32uint8base32uint4le(base32uint8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint4le';

CREATE OPERATOR <= (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint4,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8base32uint4le
);

CREATE FUNCTION base32uint8base32uint4eq(base32uint8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint4eq';

CREATE OPERATOR = (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint4,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint8base32uint4eq
);

CREATE FUNCTION base32uint8base32uint4ne(base32uint8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint4ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint4,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint8base32uint4ne
);

CREATE FUNCTION base32uint8base32uint4ge(base32uint8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint4ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint4,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8base32uint4ge
);

CREATE FUNCTION base32uint8base32uint4gt(base32uint8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint4gt';

CREATE OPERATOR > (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint4,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8base32uint4gt
);

CREATE FUNCTION btbase32uint8base32uint4cmp(base32uint8, base32uint4) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint8base32uint4cmp';

CREATE FUNCTION base32uint8base32uint4pl(base32uint8, base32uint4) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint4pl';

CREATE OPERATOR + (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint4,
    COMMUTATOR = +,
    PROCEDURE = base32uint8base32uint4pl
);

CREATE FUNCTION base32uint8base32uint4mi(base32uint8, base32uint4) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint4mi';

CREATE OPERATOR - (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint4,
    PROCEDURE = base32uint8base32uint4mi
);

CREATE FUNCTION base32uint4(base32uint8) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8_to_base32uint4';

CREATE CAST (base32uint8 AS base32uint4) WITH FUNCTION base32uint4(base32uint8) AS ASSIGNMENT;

CREATE FUNCTION base32uint8base32uint8lt(base32uint8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8lt';

CREATE OPERATOR < (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8base32uint8lt
);

CREATE FUNCTION base32uint8base32uint8le(base32uint8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8le';

CREATE OPERATOR <= (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8base32uint8le
);

CREATE FUNCTION base32uint8base32uint8eq(base32uint8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8eq';

CREATE OPERATOR = (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint8base32uint8eq
);

CREATE FUNCTION base32uint8base32uint8ne(base32uint8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint8base32uint8ne
);

CREATE FUNCTION base32uint8base32uint8ge(base32uint8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8base32uint8ge
);

CREATE FUNCTION base32uint8base32uint8gt(base32uint8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8gt';

CREATE OPERATOR > (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8base32uint8gt
);

CREATE FUNCTION btbase32uint8base32uint8cmp(base32uint8, base32uint8) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint8base32uint8cmp';

CREATE FUNCTION base32uint8base32uint8pl(base32uint8, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8pl';

CREATE OPERATOR + (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = +,
    PROCEDURE = base32uint8base32uint8pl
);

CREATE FUNCTION base32uint8base32uint8mi(base32uint8, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8mi';

CREATE OPERATOR - (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    PROCEDURE = base32uint8base32uint8mi
);

CREATE FUNCTION base32uint8int2lt(base32uint8, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int2lt';

CREATE OPERATOR < (
    LEFTARG = base32uint8,
    RIGHTARG = int2,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8int2lt
);

CREATE FUNCTION base32uint8int2le(base32uint8, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int2le';

CREATE OPERATOR <= (
    LEFTARG = base32uint8,
    RIGHTARG = int2,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8int2le
);

CREATE FUNCTION base32uint8int2eq(base32uint8, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int2eq';

CREATE OPERATOR = (
    LEFTARG = base32uint8,
    RIGHTARG = int2,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint8int2eq
);

CREATE FUNCTION base32uint8int2ne(base32uint8, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int2ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint8,
    RIGHTARG = int2,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint8int2ne
);

CREATE FUNCTION base32uint8int2ge(base32uint8, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int2ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint8,
    RIGHTARG = int2,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8int2ge
);

CREATE FUNCTION base32uint8int2gt(base32uint8, int2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int2gt';

CREATE OPERATOR > (
    LEFTARG = base32uint8,
    RIGHTARG = int2,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8int2gt
);

CREATE FUNCTION btbase32uint8int2cmp(base32uint8, int2) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint8int2cmp';

CREATE FUNCTION base32uint8int2pl(base32uint8, int2) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int2pl';

CREATE OPERATOR + (
    LEFTARG = base32uint8,
    RIGHTARG = int2,
    COMMUTATOR = +,
    PROCEDURE = base32uint8int2pl
);

CREATE FUNCTION base32uint8int2mi(base32uint8, int2) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int2mi';

CREATE OPERATOR - (
    LEFTARG = base32uint8,
    RIGHTARG = int2,
    PROCEDURE = base32uint8int2mi
);

CREATE FUNCTION int2(base32uint8) RETURNS int2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8_to_int2';

CREATE CAST (base32uint8 AS int2) WITH FUNCTION int2(base32uint8) AS ASSIGNMENT;

CREATE FUNCTION base32uint8int4lt(base32uint8, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4lt';

CREATE OPERATOR < (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8int4lt
);

CREATE FUNCTION base32uint8int4le(base32uint8, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4le';

CREATE OPERATOR <= (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8int4le
);

CREATE FUNCTION base32uint8int4eq(base32uint8, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4eq';

CREATE OPERATOR = (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint8int4eq
);

CREATE FUNCTION base32uint8int4ne(base32uint8, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint8int4ne
);

CREATE FUNCTION base32uint8int4ge(base32uint8, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8int4ge
);

CREATE FUNCTION base32uint8int4gt(base32uint8, int4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4gt';

CREATE OPERATOR > (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8int4gt
);

CREATE FUNCTION btbase32uint8int4cmp(base32uint8, int4) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint8int4cmp';

CREATE FUNCTION base32uint8int4pl(base32uint8, int4) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4pl';

CREATE OPERATOR + (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    COMMUTATOR = +,
    PROCEDURE = base32uint8int4pl
);

CREATE FUNCTION base32uint8int4mi(base32uint8, int4) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4mi';

CREATE OPERATOR - (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    PROCEDURE = base32uint8int4mi
);

CREATE FUNCTION int4(base32uint8) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8_to_int4';

CREATE CAST (base32uint8 AS int4) WITH FUNCTION int4(base32uint8) AS ASSIGNMENT;

CREATE FUNCTION base32uint8int8lt(base32uint8, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int8lt';

CREATE OPERATOR < (
    LEFTARG = base32uint8,
    RIGHTARG = int8,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8int8lt
);

CREATE FUNCTION base32uint8int8le(base32uint8, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int8le';

CREATE OPERATOR <= (
    LEFTARG = base32uint8,
    RIGHTARG = int8,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = base32uint8int8le
);

CREATE FUNCTION base32uint8int8eq(base32uint8, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int8eq';

CREATE OPERATOR = (
    LEFTARG = base32uint8,
    RIGHTARG = int8,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = base32uint8int8eq
);

CREATE FUNCTION base32uint8int8ne(base32uint8, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int8ne';

CREATE OPERATOR <> (
    LEFTARG = base32uint8,
    RIGHTARG = int8,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = base32uint8int8ne
);

CREATE FUNCTION base32uint8int8ge(base32uint8, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int8ge';

CREATE OPERATOR >= (
    LEFTARG = base32uint8,
    RIGHTARG = int8,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8int8ge
);

CREATE FUNCTION base32uint8int8gt(base32uint8, int8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int8gt';

CREATE OPERATOR > (
    LEFTARG = base32uint8,
    RIGHTARG = int8,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = base32uint8int8gt
);

CREATE FUNCTION btbase32uint8int8cmp(base32uint8, int8) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint8int8cmp';

CREATE FUNCTION base32uint8int8pl(base32uint8, int8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int8pl';

CREATE OPERATOR + (
    LEFTARG = base32uint8,
    RIGHTARG = int8,
    COMMUTATOR = +,
    PROCEDURE = base32uint8int8pl
);

CREATE FUNCTION base32uint8int8mi(base32uint8, int8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int8mi';

CREATE OPERATOR - (
    LEFTARG = base32uint8,
    RIGHTARG = int8,
    PROCEDURE = base32uint8int8mi
);

CREATE FUNCTION int8(base32uint8) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8_to_int8';

CREATE CAST (base32uint8 AS int8) WITH FUNCTION int8(base32uint8) AS ASSIGNMENT;

CREATE FUNCTION int2base32uint2lt(int2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint2lt';

CREATE OPERATOR < (
    LEFTARG = int2,
    RIGHTARG = base32uint2,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int2base32uint2lt
);

CREATE FUNCTION int2base32uint2le(int2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint2le';

CREATE OPERATOR <= (
    LEFTARG = int2,
    RIGHTARG = base32uint2,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int2base32uint2le
);

CREATE FUNCTION int2base32uint2eq(int2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint2eq';

CREATE OPERATOR = (
    LEFTARG = int2,
    RIGHTARG = base32uint2,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = int2base32uint2eq
);

CREATE FUNCTION int2base32uint2ne(int2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint2ne';

CREATE OPERATOR <> (
    LEFTARG = int2,
    RIGHTARG = base32uint2,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = int2base32uint2ne
);

CREATE FUNCTION int2base32uint2ge(int2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint2ge';

CREATE OPERATOR >= (
    LEFTARG = int2,
    RIGHTARG = base32uint2,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int2base32uint2ge
);

CREATE FUNCTION int2base32uint2gt(int2, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint2gt';

CREATE OPERATOR > (
    LEFTARG = int2,
    RIGHTARG = base32uint2,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int2base32uint2gt
);

CREATE FUNCTION btint2base32uint2cmp(int2, base32uint2) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btint2base32uint2cmp';

CREATE FUNCTION int2base32uint2pl(int2, base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint2pl';

CREATE OPERATOR + (
    LEFTARG = int2,
    RIGHTARG = base32uint2,
    COMMUTATOR = +,
    PROCEDURE = int2base32uint2pl
);

CREATE FUNCTION int2base32uint2mi(int2, base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint2mi';

CREATE OPERATOR - (
    LEFTARG = int2,
    RIGHTARG = base32uint2,
    PROCEDURE = int2base32uint2mi
);

CREATE FUNCTION base32uint2(int2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2_to_base32uint2';

CREATE CAST (int2 AS base32uint2) WITH FUNCTION base32uint2(int2) AS ASSIGNMENT;

CREATE FUNCTION int2base32uint4lt(int2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint4lt';

CREATE OPERATOR < (
    LEFTARG = int2,
    RIGHTARG = base32uint4,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int2base32uint4lt
);

CREATE FUNCTION int2base32uint4le(int2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint4le';

CREATE OPERATOR <= (
    LEFTARG = int2,
    RIGHTARG = base32uint4,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int2base32uint4le
);

CREATE FUNCTION int2base32uint4eq(int2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint4eq';

CREATE OPERATOR = (
    LEFTARG = int2,
    RIGHTARG = base32uint4,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = int2base32uint4eq
);

CREATE FUNCTION int2base32uint4ne(int2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint4ne';

CREATE OPERATOR <> (
    LEFTARG = int2,
    RIGHTARG = base32uint4,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = int2base32uint4ne
);

CREATE FUNCTION int2base32uint4ge(int2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint4ge';

CREATE OPERATOR >= (
    LEFTARG = int2,
    RIGHTARG = base32uint4,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int2base32uint4ge
);

CREATE FUNCTION int2base32uint4gt(int2, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint4gt';

CREATE OPERATOR > (
    LEFTARG = int2,
    RIGHTARG = base32uint4,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int2base32uint4gt
);

CREATE FUNCTION btint2base32uint4cmp(int2, base32uint4) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btint2base32uint4cmp';

CREATE FUNCTION int2base32uint4pl(int2, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint4pl';

CREATE OPERATOR + (
    LEFTARG = int2,
    RIGHTARG = base32uint4,
    COMMUTATOR = +,
    PROCEDURE = int2base32uint4pl
);

CREATE FUNCTION int2base32uint4mi(int2, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint4mi';

CREATE OPERATOR - (
    LEFTARG = int2,
    RIGHTARG = base32uint4,
    PROCEDURE = int2base32uint4mi
);

CREATE FUNCTION base32uint4(int2) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2_to_base32uint4';

CREATE CAST (int2 AS base32uint4) WITH FUNCTION base32uint4(int2) AS IMPLICIT;

CREATE FUNCTION int2base32uint8lt(int2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint8lt';

CREATE OPERATOR < (
    LEFTARG = int2,
    RIGHTARG = base32uint8,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int2base32uint8lt
);

CREATE FUNCTION int2base32uint8le(int2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint8le';

CREATE OPERATOR <= (
    LEFTARG = int2,
    RIGHTARG = base32uint8,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int2base32uint8le
);

CREATE FUNCTION int2base32uint8eq(int2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint8eq';

CREATE OPERATOR = (
    LEFTARG = int2,
    RIGHTARG = base32uint8,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = int2base32uint8eq
);

CREATE FUNCTION int2base32uint8ne(int2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint8ne';

CREATE OPERATOR <> (
    LEFTARG = int2,
    RIGHTARG = base32uint8,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = int2base32uint8ne
);

CREATE FUNCTION int2base32uint8ge(int2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint8ge';

CREATE OPERATOR >= (
    LEFTARG = int2,
    RIGHTARG = base32uint8,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int2base32uint8ge
);

CREATE FUNCTION int2base32uint8gt(int2, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint8gt';

CREATE OPERATOR > (
    LEFTARG = int2,
    RIGHTARG = base32uint8,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int2base32uint8gt
);

CREATE FUNCTION btint2base32uint8cmp(int2, base32uint8) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btint2base32uint8cmp';

CREATE FUNCTION int2base32uint8pl(int2, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint8pl';

CREATE OPERATOR + (
    LEFTARG = int2,
    RIGHTARG = base32uint8,
    COMMUTATOR = +,
    PROCEDURE = int2base32uint8pl
);

CREATE FUNCTION int2base32uint8mi(int2, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2base32uint8mi';

CREATE OPERATOR - (
    LEFTARG = int2,
    RIGHTARG = base32uint8,
    PROCEDURE = int2base32uint8mi
);

CREATE FUNCTION base32uint8(int2) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int2_to_base32uint8';

CREATE CAST (int2 AS base32uint8) WITH FUNCTION base32uint8(int2) AS IMPLICIT;

CREATE FUNCTION int4base32uint2lt(int4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint2lt';

CREATE OPERATOR < (
    LEFTARG = int4,
    RIGHTARG = base32uint2,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int4base32uint2lt
);

CREATE FUNCTION int4base32uint2le(int4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint2le';

CREATE OPERATOR <= (
    LEFTARG = int4,
    RIGHTARG = base32uint2,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int4base32uint2le
);

CREATE FUNCTION int4base32uint2eq(int4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint2eq';

CREATE OPERATOR = (
    LEFTARG = int4,
    RIGHTARG = base32uint2,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = int4base32uint2eq
);

CREATE FUNCTION int4base32uint2ne(int4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint2ne';

CREATE OPERATOR <> (
    LEFTARG = int4,
    RIGHTARG = base32uint2,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = int4base32uint2ne
);

CREATE FUNCTION int4base32uint2ge(int4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint2ge';

CREATE OPERATOR >= (
    LEFTARG = int4,
    RIGHTARG = base32uint2,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int4base32uint2ge
);

CREATE FUNCTION int4base32uint2gt(int4, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint2gt';

CREATE OPERATOR > (
    LEFTARG = int4,
    RIGHTARG = base32uint2,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int4base32uint2gt
);

CREATE FUNCTION btint4base32uint2cmp(int4, base32uint2) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btint4base32uint2cmp';

CREATE FUNCTION int4base32uint2pl(int4, base32uint2) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint2pl';

CREATE OPERATOR + (
    LEFTARG = int4,
    RIGHTARG = base32uint2,
    COMMUTATOR = +,
    PROCEDURE = int4base32uint2pl
);

CREATE FUNCTION int4base32uint2mi(int4, base32uint2) RETURNS int4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint2mi';

CREATE OPERATOR - (
    LEFTARG = int4,
    RIGHTARG = base32uint2,
    PROCEDURE = int4base32uint2mi
);

CREATE FUNCTION base32uint2(int4) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4_to_base32uint2';

CREATE CAST (int4 AS base32uint2) WITH FUNCTION base32uint2(int4) AS ASSIGNMENT;

CREATE FUNCTION int4base32uint4lt(int4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint4lt';

CREATE OPERATOR < (
    LEFTARG = int4,
    RIGHTARG = base32uint4,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int4base32uint4lt
);

CREATE FUNCTION int4base32uint4le(int4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint4le';

CREATE OPERATOR <= (
    LEFTARG = int4,
    RIGHTARG = base32uint4,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int4base32uint4le
);

CREATE FUNCTION int4base32uint4eq(int4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint4eq';

CREATE OPERATOR = (
    LEFTARG = int4,
    RIGHTARG = base32uint4,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = int4base32uint4eq
);

CREATE FUNCTION int4base32uint4ne(int4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint4ne';

CREATE OPERATOR <> (
    LEFTARG = int4,
    RIGHTARG = base32uint4,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = int4base32uint4ne
);

CREATE FUNCTION int4base32uint4ge(int4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint4ge';

CREATE OPERATOR >= (
    LEFTARG = int4,
    RIGHTARG = base32uint4,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int4base32uint4ge
);

CREATE FUNCTION int4base32uint4gt(int4, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint4gt';

CREATE OPERATOR > (
    LEFTARG = int4,
    RIGHTARG = base32uint4,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int4base32uint4gt
);

CREATE FUNCTION btint4base32uint4cmp(int4, base32uint4) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btint4base32uint4cmp';

CREATE FUNCTION int4base32uint4pl(int4, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint4pl';

CREATE OPERATOR + (
    LEFTARG = int4,
    RIGHTARG = base32uint4,
    COMMUTATOR = +,
    PROCEDURE = int4base32uint4pl
);

CREATE FUNCTION int4base32uint4mi(int4, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint4mi';

CREATE OPERATOR - (
    LEFTARG = int4,
    RIGHTARG = base32uint4,
    PROCEDURE = int4base32uint4mi
);

CREATE FUNCTION base32uint4(int4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4_to_base32uint4';

CREATE CAST (int4 AS base32uint4) WITH FUNCTION base32uint4(int4) AS ASSIGNMENT;

CREATE FUNCTION int4base32uint8lt(int4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint8lt';

CREATE OPERATOR < (
    LEFTARG = int4,
    RIGHTARG = base32uint8,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int4base32uint8lt
);

CREATE FUNCTION int4base32uint8le(int4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint8le';

CREATE OPERATOR <= (
    LEFTARG = int4,
    RIGHTARG = base32uint8,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int4base32uint8le
);

CREATE FUNCTION int4base32uint8eq(int4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint8eq';

CREATE OPERATOR = (
    LEFTARG = int4,
    RIGHTARG = base32uint8,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = int4base32uint8eq
);

CREATE FUNCTION int4base32uint8ne(int4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint8ne';

CREATE OPERATOR <> (
    LEFTARG = int4,
    RIGHTARG = base32uint8,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = int4base32uint8ne
);

CREATE FUNCTION int4base32uint8ge(int4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint8ge';

CREATE OPERATOR >= (
    LEFTARG = int4,
    RIGHTARG = base32uint8,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int4base32uint8ge
);

CREATE FUNCTION int4base32uint8gt(int4, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint8gt';

CREATE OPERATOR > (
    LEFTARG = int4,
    RIGHTARG = base32uint8,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int4base32uint8gt
);

CREATE FUNCTION btint4base32uint8cmp(int4, base32uint8) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btint4base32uint8cmp';

CREATE FUNCTION int4base32uint8pl(int4, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint8pl';

CREATE OPERATOR + (
    LEFTARG = int4,
    RIGHTARG = base32uint8,
    COMMUTATOR = +,
    PROCEDURE = int4base32uint8pl
);

CREATE FUNCTION int4base32uint8mi(int4, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4base32uint8mi';

CREATE OPERATOR - (
    LEFTARG = int4,
    RIGHTARG = base32uint8,
    PROCEDURE = int4base32uint8mi
);

CREATE FUNCTION base32uint8(int4) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int4_to_base32uint8';

CREATE CAST (int4 AS base32uint8) WITH FUNCTION base32uint8(int4) AS IMPLICIT;

CREATE FUNCTION int8base32uint2lt(int8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint2lt';

CREATE OPERATOR < (
    LEFTARG = int8,
    RIGHTARG = base32uint2,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int8base32uint2lt
);

CREATE FUNCTION int8base32uint2le(int8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint2le';

CREATE OPERATOR <= (
    LEFTARG = int8,
    RIGHTARG = base32uint2,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int8base32uint2le
);

CREATE FUNCTION int8base32uint2eq(int8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint2eq';

CREATE OPERATOR = (
    LEFTARG = int8,
    RIGHTARG = base32uint2,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = int8base32uint2eq
);

CREATE FUNCTION int8base32uint2ne(int8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint2ne';

CREATE OPERATOR <> (
    LEFTARG = int8,
    RIGHTARG = base32uint2,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = int8base32uint2ne
);

CREATE FUNCTION int8base32uint2ge(int8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint2ge';

CREATE OPERATOR >= (
    LEFTARG = int8,
    RIGHTARG = base32uint2,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int8base32uint2ge
);

CREATE FUNCTION int8base32uint2gt(int8, base32uint2) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint2gt';

CREATE OPERATOR > (
    LEFTARG = int8,
    RIGHTARG = base32uint2,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int8base32uint2gt
);

CREATE FUNCTION btint8base32uint2cmp(int8, base32uint2) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btint8base32uint2cmp';

CREATE FUNCTION int8base32uint2pl(int8, base32uint2) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint2pl';

CREATE OPERATOR + (
    LEFTARG = int8,
    RIGHTARG = base32uint2,
    COMMUTATOR = +,
    PROCEDURE = int8base32uint2pl
);

CREATE FUNCTION int8base32uint2mi(int8, base32uint2) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint2mi';

CREATE OPERATOR - (
    LEFTARG = int8,
    RIGHTARG = base32uint2,
    PROCEDURE = int8base32uint2mi
);

CREATE FUNCTION base32uint2(int8) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8_to_base32uint2';

CREATE CAST (int8 AS base32uint2) WITH FUNCTION base32uint2(int8) AS ASSIGNMENT;

CREATE FUNCTION int8base32uint4lt(int8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint4lt';

CREATE OPERATOR < (
    LEFTARG = int8,
    RIGHTARG = base32uint4,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int8base32uint4lt
);

CREATE FUNCTION int8base32uint4le(int8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint4le';

CREATE OPERATOR <= (
    LEFTARG = int8,
    RIGHTARG = base32uint4,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int8base32uint4le
);

CREATE FUNCTION int8base32uint4eq(int8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint4eq';

CREATE OPERATOR = (
    LEFTARG = int8,
    RIGHTARG = base32uint4,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = int8base32uint4eq
);

CREATE FUNCTION int8base32uint4ne(int8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint4ne';

CREATE OPERATOR <> (
    LEFTARG = int8,
    RIGHTARG = base32uint4,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = int8base32uint4ne
);

CREATE FUNCTION int8base32uint4ge(int8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint4ge';

CREATE OPERATOR >= (
    LEFTARG = int8,
    RIGHTARG = base32uint4,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int8base32uint4ge
);

CREATE FUNCTION int8base32uint4gt(int8, base32uint4) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint4gt';

CREATE OPERATOR > (
    LEFTARG = int8,
    RIGHTARG = base32uint4,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int8base32uint4gt
);

CREATE FUNCTION btint8base32uint4cmp(int8, base32uint4) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btint8base32uint4cmp';

CREATE FUNCTION int8base32uint4pl(int8, base32uint4) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint4pl';

CREATE OPERATOR + (
    LEFTARG = int8,
    RIGHTARG = base32uint4,
    COMMUTATOR = +,
    PROCEDURE = int8base32uint4pl
);

CREATE FUNCTION int8base32uint4mi(int8, base32uint4) RETURNS int8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint4mi';

CREATE OPERATOR - (
    LEFTARG = int8,
    RIGHTARG = base32uint4,
    PROCEDURE = int8base32uint4mi
);

CREATE FUNCTION base32uint4(int8) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8_to_base32uint4';

CREATE CAST (int8 AS base32uint4) WITH FUNCTION base32uint4(int8) AS ASSIGNMENT;

CREATE FUNCTION int8base32uint8lt(int8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint8lt';

CREATE OPERATOR < (
    LEFTARG = int8,
    RIGHTARG = base32uint8,
    COMMUTATOR = >,
    NEGATOR = >=,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int8base32uint8lt
);

CREATE FUNCTION int8base32uint8le(int8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint8le';

CREATE OPERATOR <= (
    LEFTARG = int8,
    RIGHTARG = base32uint8,
    COMMUTATOR = >=,
    NEGATOR = >,
    RESTRICT = scalarltsel,
    JOIN = scalarltjoinsel,
    PROCEDURE = int8base32uint8le
);

CREATE FUNCTION int8base32uint8eq(int8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint8eq';

CREATE OPERATOR = (
    LEFTARG = int8,
    RIGHTARG = base32uint8,
    COMMUTATOR = =,
    NEGATOR = <>,
    RESTRICT = eqsel,
    JOIN = eqjoinsel,
    HASHES,
    MERGES,
    PROCEDURE = int8base32uint8eq
);

CREATE FUNCTION int8base32uint8ne(int8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint8ne';

CREATE OPERATOR <> (
    LEFTARG = int8,
    RIGHTARG = base32uint8,
    COMMUTATOR = <>,
    NEGATOR = =,
    RESTRICT = neqsel,
    JOIN = neqjoinsel,
    PROCEDURE = int8base32uint8ne
);

CREATE FUNCTION int8base32uint8ge(int8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint8ge';

CREATE OPERATOR >= (
    LEFTARG = int8,
    RIGHTARG = base32uint8,
    COMMUTATOR = <=,
    NEGATOR = <,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int8base32uint8ge
);

CREATE FUNCTION int8base32uint8gt(int8, base32uint8) RETURNS boolean IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint8gt';

CREATE OPERATOR > (
    LEFTARG = int8,
    RIGHTARG = base32uint8,
    COMMUTATOR = <,
    NEGATOR = <=,
    RESTRICT = scalargtsel,
    JOIN = scalargtjoinsel,
    PROCEDURE = int8base32uint8gt
);

CREATE FUNCTION btint8base32uint8cmp(int8, base32uint8) RETURNS integer IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btint8base32uint8cmp';

CREATE FUNCTION int8base32uint8pl(int8, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint8pl';

CREATE OPERATOR + (
    LEFTARG = int8,
    RIGHTARG = base32uint8,
    COMMUTATOR = +,
    PROCEDURE = int8base32uint8pl
);

CREATE FUNCTION int8base32uint8mi(int8, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8base32uint8mi';

CREATE OPERATOR - (
    LEFTARG = int8,
    RIGHTARG = base32uint8,
    PROCEDURE = int8base32uint8mi
);

CREATE FUNCTION base32uint8(int8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'int8_to_base32uint8';

CREATE CAST (int8 AS base32uint8) WITH FUNCTION base32uint8(int8) AS ASSIGNMENT;

CREATE FUNCTION base32uint2base32uint2and(base32uint2, base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2and';

CREATE OPERATOR & (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = &,
    PROCEDURE = base32uint2base32uint2and
);

CREATE FUNCTION base32uint2base32uint2or(base32uint2, base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2or';

CREATE OPERATOR | (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = |,
    PROCEDURE = base32uint2base32uint2or
);

CREATE FUNCTION base32uint2base32uint2xor(base32uint2, base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2base32uint2xor';

CREATE OPERATOR # (
    LEFTARG = base32uint2,
    RIGHTARG = base32uint2,
    COMMUTATOR = #,
    PROCEDURE = base32uint2base32uint2xor
);

CREATE FUNCTION base32uint2not(base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2not';

CREATE OPERATOR ~ (
    RIGHTARG = base32uint2,
    PROCEDURE = base32uint2not
);

CREATE FUNCTION base32uint2int4shl(base32uint2, int4) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4shl';

CREATE OPERATOR << (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    PROCEDURE = base32uint2int4shl
);

CREATE FUNCTION base32uint2int4shr(base32uint2, int4) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2int4shr';

CREATE OPERATOR >> (
    LEFTARG = base32uint2,
    RIGHTARG = int4,
    PROCEDURE = base32uint2int4shr
);

CREATE FUNCTION btbase32uint2sortsupport(internal) RETURNS void IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint2sortsupport';

CREATE OPERATOR CLASS base32uint2_ops
    DEFAULT FOR TYPE base32uint2 USING btree FAMILY integer_ops AS
        OPERATOR        1       < ,
        OPERATOR        2       <= ,
        OPERATOR        3       = ,
        OPERATOR        4       >= ,
        OPERATOR        5       > ,
        FUNCTION        1       btbase32uint2base32uint2cmp(base32uint2, base32uint2),
        FUNCTION        2       btbase32uint2sortsupport(internal);

CREATE OPERATOR CLASS base32uint2_ops
    DEFAULT FOR TYPE base32uint2 USING hash FAMILY integer_ops AS
        OPERATOR        1       =,
        FUNCTION        1       hashbase32uint2(base32uint2);

CREATE FUNCTION base32uint2smaller(base32uint2, base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2smaller';

CREATE AGGREGATE min(base32uint2) (SFUNC = base32uint2smaller, STYPE = base32uint2, SORTOP = <);

CREATE FUNCTION base32uint2larger(base32uint2, base32uint2) RETURNS base32uint2 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint2larger';

CREATE AGGREGATE max(base32uint2) (SFUNC = base32uint2larger, STYPE = base32uint2, SORTOP = >);

CREATE AGGREGATE bit_and(base32uint2) (SFUNC = base32uint2base32uint2and, STYPE = base32uint2);

CREATE AGGREGATE bit_or(base32uint2) (SFUNC = base32uint2base32uint2or, STYPE = base32uint2);

CREATE FUNCTION base32uint4base32uint4and(base32uint4, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4and';

CREATE OPERATOR & (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = &,
    PROCEDURE = base32uint4base32uint4and
);

CREATE FUNCTION base32uint4base32uint4or(base32uint4, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4or';

CREATE OPERATOR | (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = |,
    PROCEDURE = base32uint4base32uint4or
);

CREATE FUNCTION base32uint4base32uint4xor(base32uint4, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4base32uint4xor';

CREATE OPERATOR # (
    LEFTARG = base32uint4,
    RIGHTARG = base32uint4,
    COMMUTATOR = #,
    PROCEDURE = base32uint4base32uint4xor
);

CREATE FUNCTION base32uint4not(base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4not';

CREATE OPERATOR ~ (
    RIGHTARG = base32uint4,
    PROCEDURE = base32uint4not
);

CREATE FUNCTION base32uint4int4shl(base32uint4, int4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4shl';

CREATE OPERATOR << (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    PROCEDURE = base32uint4int4shl
);

CREATE FUNCTION base32uint4int4shr(base32uint4, int4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4int4shr';

CREATE OPERATOR >> (
    LEFTARG = base32uint4,
    RIGHTARG = int4,
    PROCEDURE = base32uint4int4shr
);

CREATE FUNCTION btbase32uint4sortsupport(internal) RETURNS void IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint4sortsupport';

CREATE OPERATOR CLASS base32uint4_ops
    DEFAULT FOR TYPE base32uint4 USING btree FAMILY integer_ops AS
        OPERATOR        1       < ,
        OPERATOR        2       <= ,
        OPERATOR        3       = ,
        OPERATOR        4       >= ,
        OPERATOR        5       > ,
        FUNCTION        1       btbase32uint4base32uint4cmp(base32uint4, base32uint4),
        FUNCTION        2       btbase32uint4sortsupport(internal);

CREATE OPERATOR CLASS base32uint4_ops
    DEFAULT FOR TYPE base32uint4 USING hash FAMILY integer_ops AS
        OPERATOR        1       =,
        FUNCTION        1       hashbase32uint4(base32uint4);

CREATE FUNCTION base32uint4smaller(base32uint4, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4smaller';

CREATE AGGREGATE min(base32uint4) (SFUNC = base32uint4smaller, STYPE = base32uint4, SORTOP = <);

CREATE FUNCTION base32uint4larger(base32uint4, base32uint4) RETURNS base32uint4 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint4larger';

CREATE AGGREGATE max(base32uint4) (SFUNC = base32uint4larger, STYPE = base32uint4, SORTOP = >);

CREATE AGGREGATE bit_and(base32uint4) (SFUNC = base32uint4base32uint4and, STYPE = base32uint4);

CREATE AGGREGATE bit_or(base32uint4) (SFUNC = base32uint4base32uint4or, STYPE = base32uint4);

CREATE FUNCTION base32uint8base32uint8and(base32uint8, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8and';

CREATE OPERATOR & (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = &,
    PROCEDURE = base32uint8base32uint8and
);

CREATE FUNCTION base32uint8base32uint8or(base32uint8, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8or';

CREATE OPERATOR | (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = |,
    PROCEDURE = base32uint8base32uint8or
);

CREATE FUNCTION base32uint8base32uint8xor(base32uint8, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8base32uint8xor';

CREATE OPERATOR # (
    LEFTARG = base32uint8,
    RIGHTARG = base32uint8,
    COMMUTATOR = #,
    PROCEDURE = base32uint8base32uint8xor
);

CREATE FUNCTION base32uint8not(base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8not';

CREATE OPERATOR ~ (
    RIGHTARG = base32uint8,
    PROCEDURE = base32uint8not
);

CREATE FUNCTION base32uint8int4shl(base32uint8, int4) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4shl';

CREATE OPERATOR << (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    PROCEDURE = base32uint8int4shl
);

CREATE FUNCTION base32uint8int4shr(base32uint8, int4) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8int4shr';

CREATE OPERATOR >> (
    LEFTARG = base32uint8,
    RIGHTARG = int4,
    PROCEDURE = base32uint8int4shr
);

CREATE FUNCTION btbase32uint8sortsupport(internal) RETURNS void IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'btbase32uint8sortsupport';

CREATE OPERATOR CLASS base32uint8_ops
    DEFAULT FOR TYPE base32uint8 USING btree FAMILY integer_ops AS
        OPERATOR        1       < ,
        OPERATOR        2       <= ,
        OPERATOR        3       = ,
        OPERATOR        4       >= ,
        OPERATOR        5       > ,
        FUNCTION        1       btbase32uint8base32uint8cmp(base32uint8, base32uint8),
        FUNCTION        2       btbase32uint8sortsupport(internal);

CREATE OPERATOR CLASS base32uint8_ops
    DEFAULT FOR TYPE base32uint8 USING hash FAMILY integer_ops AS
        OPERATOR        1       =,
        FUNCTION        1       hashbase32uint8(base32uint8);

CREATE FUNCTION base32uint8smaller(base32uint8, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8smaller';

CREATE AGGREGATE min(base32uint8) (SFUNC = base32uint8smaller, STYPE = base32uint8, SORTOP = <);

CREATE FUNCTION base32uint8larger(base32uint8, base32uint8) RETURNS base32uint8 IMMUTABLE STRICT LANGUAGE C AS '$libdir/base32', 'base32uint8larger';

CREATE AGGREGATE max(base32uint8) (SFUNC = base32uint8larger, STYPE = base32uint8, SORTOP = >);

CREATE AGGREGATE bit_and(base32uint8) (SFUNC = base32uint8base32uint8and, STYPE = base32uint8);

CREATE AGGREGATE bit_or(base32uint8) (SFUNC = base32uint8base32uint8or, STYPE = base32uint8);

ALTER OPERATOR FAMILY integer_ops USING btree ADD
OPERATOR 1 <  (base32uint2, base32uint4),
OPERATOR 2 <= (base32uint2, base32uint4),
OPERATOR 3 =  (base32uint2, base32uint4),
OPERATOR 4 >= (base32uint2, base32uint4),
OPERATOR 5 >  (base32uint2, base32uint4),
FUNCTION 1 btbase32uint2base32uint4cmp(base32uint2, base32uint4),
OPERATOR 1 <  (base32uint2, base32uint8),
OPERATOR 2 <= (base32uint2, base32uint8),
OPERATOR 3 =  (base32uint2, base32uint8),
OPERATOR 4 >= (base32uint2, base32uint8),
OPERATOR 5 >  (base32uint2, base32uint8),
FUNCTION 1 btbase32uint2base32uint8cmp(base32uint2, base32uint8),
OPERATOR 1 <  (base32uint2, int2),
OPERATOR 2 <= (base32uint2, int2),
OPERATOR 3 =  (base32uint2, int2),
OPERATOR 4 >= (base32uint2, int2),
OPERATOR 5 >  (base32uint2, int2),
FUNCTION 1 btbase32uint2int2cmp(base32uint2, int2),
OPERATOR 1 <  (base32uint2, int4),
OPERATOR 2 <= (base32uint2, int4),
OPERATOR 3 =  (base32uint2, int4),
OPERATOR 4 >= (base32uint2, int4),
OPERATOR 5 >  (base32uint2, int4),
FUNCTION 1 btbase32uint2int4cmp(base32uint2, int4),
OPERATOR 1 <  (base32uint2, int8),
OPERATOR 2 <= (base32uint2, int8),
OPERATOR 3 =  (base32uint2, int8),
OPERATOR 4 >= (base32uint2, int8),
OPERATOR 5 >  (base32uint2, int8),
FUNCTION 1 btbase32uint2int8cmp(base32uint2, int8),
OPERATOR 1 <  (base32uint4, base32uint2),
OPERATOR 2 <= (base32uint4, base32uint2),
OPERATOR 3 =  (base32uint4, base32uint2),
OPERATOR 4 >= (base32uint4, base32uint2),
OPERATOR 5 >  (base32uint4, base32uint2),
FUNCTION 1 btbase32uint4base32uint2cmp(base32uint4, base32uint2),
OPERATOR 1 <  (base32uint4, base32uint8),
OPERATOR 2 <= (base32uint4, base32uint8),
OPERATOR 3 =  (base32uint4, base32uint8),
OPERATOR 4 >= (base32uint4, base32uint8),
OPERATOR 5 >  (base32uint4, base32uint8),
FUNCTION 1 btbase32uint4base32uint8cmp(base32uint4, base32uint8),
OPERATOR 1 <  (base32uint4, int2),
OPERATOR 2 <= (base32uint4, int2),
OPERATOR 3 =  (base32uint4, int2),
OPERATOR 4 >= (base32uint4, int2),
OPERATOR 5 >  (base32uint4, int2),
FUNCTION 1 btbase32uint4int2cmp(base32uint4, int2),
OPERATOR 1 <  (base32uint4, int4),
OPERATOR 2 <= (base32uint4, int4),
OPERATOR 3 =  (base32uint4, int4),
OPERATOR 4 >= (base32uint4, int4),
OPERATOR 5 >  (base32uint4, int4),
FUNCTION 1 btbase32uint4int4cmp(base32uint4, int4),
OPERATOR 1 <  (base32uint4, int8),
OPERATOR 2 <= (base32uint4, int8),
OPERATOR 3 =  (base32uint4, int8),
OPERATOR 4 >= (base32uint4, int8),
OPERATOR 5 >  (base32uint4, int8),
FUNCTION 1 btbase32uint4int8cmp(base32uint4, int8),
OPERATOR 1 <  (base32uint8, base32uint2),
OPERATOR 2 <= (base32uint8, base32uint2),
OPERATOR 3 =  (base32uint8, base32uint2),
OPERATOR 4 >= (base32uint8, base32uint2),
OPERATOR 5 >  (base32uint8, base32uint2),
FUNCTION 1 btbase32uint8base32uint2cmp(base32uint8, base32uint2),
OPERATOR 1 <  (base32uint8, base32uint4),
OPERATOR 2 <= (base32uint8, base32uint4),
OPERATOR 3 =  (base32uint8, base32uint4),
OPERATOR 4 >= (base32uint8, base32uint4),
OPERATOR 5 >  (base32uint8, base32uint4),
FUNCTION 1 btbase32uint8base32uint4cmp(base32uint8, base32uint4),
OPERATOR 1 <  (base32uint8, int2),
OPERATOR 2 <= (base32uint8, int2),
OPERATOR 3 =  (base32uint8, int2),
OPERATOR 4 >= (base32uint8, int2),
OPERATOR 5 >  (base32uint8, int2),
FUNCTION 1 btbase32uint8int2cmp(base32uint8, int2),
OPERATOR 1 <  (base32uint8, int4),
OPERATOR 2 <= (base32uint8, int4),
OPERATOR 3 =  (base32uint8, int4),
OPERATOR 4 >= (base32uint8, int4),
OPERATOR 5 >  (base32uint8, int4),
FUNCTION 1 btbase32uint8int4cmp(base32uint8, int4),
OPERATOR 1 <  (base32uint8, int8),
OPERATOR 2 <= (base32uint8, int8),
OPERATOR 3 =  (base32uint8, int8),
OPERATOR 4 >= (base32uint8, int8),
OPERATOR 5 >  (base32uint8, int8),
FUNCTION 1 btbase32uint8int8cmp(base32uint8, int8),
OPERATOR 1 <  (int2, base32uint2),
OPERATOR 2 <= (int2, base32uint2),
OPERATOR 3 =  (int2, base32uint2),
OPERATOR 4 >= (int2, base32uint2),
OPERATOR 5 >  (int2, base32uint2),
FUNCTION 1 btint2base32uint2cmp(int2, base32uint2),
OPERATOR 1 <  (int2, base32uint4),
OPERATOR 2 <= (int2, base32uint4),
OPERATOR 3 =  (int2, base32uint4),
OPERATOR 4 >= (int2, base32uint4),
OPERATOR 5 >  (int2, base32uint4),
FUNCTION 1 btint2base32uint4cmp(int2, base32uint4),
OPERATOR 1 <  (int2, base32uint8),
OPERATOR 2 <= (int2, base32uint8),
OPERATOR 3 =  (int2, base32uint8),
OPERATOR 4 >= (int2, base32uint8),
OPERATOR 5 >  (int2, base32uint8),
FUNCTION 1 btint2base32uint8cmp(int2, base32uint8),
OPERATOR 1 <  (int4, base32uint2),
OPERATOR 2 <= (int4, base32uint2),
OPERATOR 3 =  (int4, base32uint2),
OPERATOR 4 >= (int4, base32uint2),
OPERATOR 5 >  (int4, base32uint2),
FUNCTION 1 btint4base32uint2cmp(int4, base32uint2),
OPERATOR 1 <  (int4, base32uint4),
OPERATOR 2 <= (int4, base32uint4),
OPERATOR 3 =  (int4, base32uint4),
OPERATOR 4 >= (int4, base32uint4),
OPERATOR 5 >  (int4, base32uint4),
FUNCTION 1 btint4base32uint4cmp(int4, base32uint4),
OPERATOR 1 <  (int4, base32uint8),
OPERATOR 2 <= (int4, base32uint8),
OPERATOR 3 =  (int4, base32uint8),
OPERATOR 4 >= (int4, base32uint8),
OPERATOR 5 >  (int4, base32uint8),
FUNCTION 1 btint4base32uint8cmp(int4, base32uint8),
OPERATOR 1 <  (int8, base32uint2),
OPERATOR 2 <= (int8, base32uint2),
OPERATOR 3 =  (int8, base32uint2),
OPERATOR 4 >= (int8, base32uint2),
OPERATOR 5 >  (int8, base32uint2),
FUNCTION 1 btint8base32uint2cmp(int8, base32uint2),
OPERATOR 1 <  (int8, base32uint4),
OPERATOR 2 <= (int8, base32uint4),
OPERATOR 3 =  (int8, base32uint4),
OPERATOR 4 >= (int8, base32uint4),
OPERATOR 5 >  (int8, base32uint4),
FUNCTION 1 btint8base32uint4cmp(int8, base32uint4),
OPERATOR 1 <  (int8, base32uint8),
OPERATOR 2 <= (int8, base32uint8),
OPERATOR 3 =  (int8, base32uint8),
OPERATOR 4 >= (int8, base32uint8),
OPERATOR 5 >  (int8, base32uint8),
FUNCTION 1 btint8base32uint8cmp(int8, base32uint8);

ALTER OPERATOR FAMILY integer_ops USING hash ADD
OPERATOR 1 = (base32uint2, base32uint4),
OPERATOR 1 = (base32uint2, base32uint8),
OPERATOR 1 = (base32uint2, int2),
OPERATOR 1 = (base32uint2, int4),
OPERATOR 1 = (base32uint2, int8),
OPERATOR 1 = (base32uint4, base32uint2),
OPERATOR 1 = (base32uint4, base32uint8),
OPERATOR 1 = (base32uint4, int2),
OPERATOR 1 = (base32uint4, int4),
OPERATOR 1 = (base32uint4, int8),
OPERATOR 1 = (base32uint8, base32uint2),
OPERATOR 1 = (base32uint8, base32uint4),
OPERATOR 1 = (base32uint8, int2),
OPERATOR 1 = (base32uint8, int4),
OPERATOR 1 = (base32uint8, int8),
OPERATOR 1 = (int2, base32uint2),
OPERATOR 1 = (int2, base32uint4),
OPERATOR 1 = (int2, base32uint8),
OPERATOR 1 = (int4, base32uint2),
OPERATOR 1 = (int4, base32uint4),
OPERATOR 1 = (int4, base32uint8),
OPERATOR 1 = (int8, base32uint2),
OPERATOR 1 = (int8, base32uint4),
OPERATOR 1 = (int8, base32uint8);

