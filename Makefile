.PHONY: bintest update-version

PG_CONFIG = pg_config

pg_version := $(word 2,$(shell $(PG_CONFIG) --version))
pg_config_h := $(shell $(PG_CONFIG) --includedir-server)/pg_config.h
use_float_byval := $(shell grep -q 'USE_FLOAT8_BYVAL 1' $(pg_config_h) && echo yes)
comma = ,

GIT_REVISION := $(shell bin/git-revision)

EXTENSION = crockford
EXTVERSION = 0.8.$(GIT_REVISION)

MODULE_big = crockford
OBJS = hash.o inout.o magic.o operators.o
DATA_built = crockford--$(EXTVERSION).sql

REGRESS = init hash inout operators example drop
REGRESS_OPTS = --inputdir=test --outputdir=test

EXTRA_CLEAN += operators.c operators.sql test/sql/operators.sql bintest bintest.o

PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)

crockford--$(EXTVERSION).sql: crockford.sql hash.sql operators.sql
	cat $^ | sed 's/@UINT8_PASSEDBYVALUE@/$(if $(use_float_byval),PASSEDBYVALUE$(comma))/' >$@


# Original has this as PYTHON ?= python
PYTHON = python

operators.c operators.sql test/sql/operators.sql: generate.py
	$(PYTHON) $< $(pg_version)

pg_include := $(shell $(PG_CONFIG) --includedir)

bintest: bintest.c
	cc -c -I$(pg_include) bintest.c
	cc -o bintest bintest.o -L$(pg_include) -lpq

bincheck: bintest
	./bincheck

update-version-strings:
	sed -E -i.bak -e 's~^(default_version = ) *[^ ]*~\1'"'$(EXTVERSION)'"'~' crockford.control
	sed -E -i.bak -e 's~^(Latest release: *)[^ ]*~\1$(EXTVERSION)~' README.markdown
	rm *.bak

tag-release:
	git tag -a "$(EXTVERSION)" -m "$(EXTVERSION)"
