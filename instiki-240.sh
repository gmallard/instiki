#!/usr/bin/env bash
#
base=$(dirname $0)
export RUBY_HOME=/opt/r24x
export PATH=$RUBY_HOME/bin:$PATH
pushd $base
git checkout ruby2.4.0p0
ruby $base/instiki.rb
popd

