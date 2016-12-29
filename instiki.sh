#!/usr/bin/env bash
#
export RUBY_HOME=/opt/r230_007
export PATH=$RUBY_HOME/bin:$PATH
#
base=$(dirname $0)
ruby $base/instiki.rb

