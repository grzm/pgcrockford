#!/bin/sh

# tee /dev/tty is for user to see the set of procs considered
PROCS=`ps auxww | \
    grep postgres: | \
    grep -v -e 'grep postgres:' -e 'postgres: stats' -e 'postgres: writer' -e 'postgres: archiver' -e 'postgres: logger' -e 'postgres: autovacuum' | \
    tee /dev/tty | \
    awk '{print $2}'`


if [ `echo "$PROCS" | wc -w` -eq 1 ]
then
    exec gdb postgres -silent "$PROCS"
else
    exec gdb postgres -silent
fi

