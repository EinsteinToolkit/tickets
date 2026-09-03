#!/bin/bash

# Run this script to build the SimFactory user guide and commit the
# result to SVN.  It assumes that you have the Sphinx documentation
# package installed and the sphinx-build command available on your
# path.

set -e
set -x

dir=$(mktemp -d)
cd $dir
svn co -q https://svn.cct.lsu.edu/repos/numrel/simfactory2/trunk simfactory
cd simfactory/doc/userguide
# Needed for PATH and PYTHONPATH if run non-interactively
if ! source ~/.bash_profile; then
    echo "Error sourcing .bash_profile - continuing"
fi
./autogen
make html
svn co -q https://svn.cct.lsu.edu/repos/numrel/simfactory2/www/info/documentation/userguide wwwuserguide
rsync -a _build/html/ wwwuserguide/
cd wwwuserguide
svn add *
svn commit -m "Regenerate user guide"
