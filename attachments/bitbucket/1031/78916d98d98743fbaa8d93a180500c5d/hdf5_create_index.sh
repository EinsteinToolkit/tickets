#!/bin/bash

# usage: hdf5_create_index.sh a.h5 b.h5 c.h5


while [ $# -gt 0 ] ; do
  echo $1
  h5ls $1 | gawk '{gsub("\\\\","");sub(" +(Dataset|Group).*$","");slurp[++n]=$0}END{for(s in slurp) print slurp[s]}' | hdf5_create_index >/dev/null /dev/stdin $1 ${1%.h5}.idx.h5
  shift
done
