\echo Use "CREATE EXTENSION crockford" to load this file. \quit

CREATE TYPE crockford2;

CREATE FUNCTION crockford2in(cstring) RETURNS crockford2
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford2in';

CREATE FUNCTION crockford2out(crockford2) RETURNS cstring
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford2out';

CREATE FUNCTION crockford2recv(internal) RETURNS crockford2
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford2recv';

CREATE FUNCTION crockford2send(crockford2) RETURNS bytea
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford2send';

CREATE TYPE crockford2 (
  INPUT = crockford2in,
  OUTPUT = crockford2out,
  RECEIVE = crockford2recv,
  SEND = crockford2send,
  INTERNALLENGTH = 2,
  PASSEDBYVALUE,
  ALIGNMENT = int2
);

CREATE TYPE crockford4;

CREATE FUNCTION crockford4in(cstring) RETURNS crockford4
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford4in';

CREATE FUNCTION crockford4out(crockford4) RETURNS cstring
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford4out';

CREATE FUNCTION crockford4recv(internal) RETURNS crockford4
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford4recv';

CREATE FUNCTION crockford4send(crockford4) RETURNS bytea
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford4send';

CREATE TYPE crockford4 (
  INPUT = crockford4in,
  OUTPUT = crockford4out,
  RECEIVE = crockford4recv,
  SEND = crockford4send,
  INTERNALLENGTH = 4,
  PASSEDBYVALUE,
  ALIGNMENT = int4
);

CREATE TYPE crockford8;


CREATE FUNCTION crockford8in(cstring) RETURNS crockford8
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford8in';

CREATE FUNCTION crockford8out(crockford8) RETURNS cstring
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford8out';

CREATE FUNCTION crockford8recv(internal) RETURNS crockford8
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford8recv';

CREATE FUNCTION crockford8send(crockford8) RETURNS bytea
IMMUTABLE STRICT LANGUAGE C AS '$libdir/crockford', 'crockford8send';

CREATE TYPE crockford8 (
  INPUT = crockford8in,
  OUTPUT = crockford8out,
  RECEIVE = crockford8recv,
  SEND = crockford8send,
  INTERNALLENGTH = 8,
  @UINT8_PASSEDBYVALUE@
  ALIGNMENT = double
);
