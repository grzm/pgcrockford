PG_CONFIG = pg_config

pg_version := $(word 2,$(shell $(PG_CONFIG) --version))
pg_config_h := $(shell $(PG_CONFIG) --includedir-server)/pg_config.h
use_float_byval := $(shell grep -q 'USE_FLOAT8_BYVAL 1' $(pg_config_h) && echo yes)
comma = ,

EXTENSION = crockford
EXTVERSION = $(shell grep default_version $(EXTENSION).control | \
			   sed -e "s/default_version[[:space:]]*=[[:space:]]*\([[:digit:]][[:digit:]]*\)/\1/")

MODULE_big = crockford
OBJS = hash.o inout.o magic.o operators.o
DATA_built = crockford--$(EXTVERSION).sql

REGRESS = init hash inout operators example drop
REGRESS_OPTS = --inputdir=test

EXTRA_CLEAN += operators.c operators.sql test/sql/operators.sql

PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)

crockford--$(EXTVERSION).sql: crockford.sql hash.sql operators.sql
	cat $^ | sed 's/@UINT8_PASSEDBYVALUE@/$(if $(use_float_byval),PASSEDBYVALUE$(comma))/' >$@


# Original has this as PYTHON ?= python
PYTHON = python

operators.c operators.sql test/sql/operators.sql: generate.py
	$(PYTHON) $< $(pg_version)
