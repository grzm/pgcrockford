#!/usr/bin/env bash

set -eux

DBNAME=${DBNAME:-crockford_test}

set +e
psql -c "create database $DBNAME"
psql -d $DBNAME -f test/sql/init.sql
./bintest "host=localhost dbname=$DBNAME"
ret=$?

set -e

psql -c "drop database $DBNAME"

exit $ret
