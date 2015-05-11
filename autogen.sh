#!/bin/sh

AUTORECONF=`which autoreconf`

if [ -z $AUTORECONF ]; then
  echo "*** No autoreconf found, please install autoconf ***"
  exit 1
fi

$AUTORECONF -if
