#!/usr/bin/env bash
#
base=$(dirname $0)
export RUBY_HOME=/opt/r230_007
export PATH=$RUBY_HOME/bin:$PATH
pushd $base
git checkout ruby2.3.0p7
ruby $base/instiki.rb
popd

