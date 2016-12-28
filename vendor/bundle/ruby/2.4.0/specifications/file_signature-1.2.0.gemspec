# -*- encoding: utf-8 -*-
# stub: file_signature 1.2.0 ruby lib

Gem::Specification.new do |s|
  s.name = "file_signature".freeze
  s.version = "1.2.0"

  s.required_rubygems_version = Gem::Requirement.new(">= 0".freeze) if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib".freeze]
  s.authors = ["distler".freeze, "robacarp".freeze, "Joel Parker Henderson @ SixArm".freeze]
  s.date = "2012-10-02"
  s.description = "Monkeypatches File and IO to include a '''magic_number_type''' method which returns a symbol, and a '''mime_type''' method which returns a string, representing the mime type guessed.".freeze
  s.email = ["distler@golem.ph.utexas.edu".freeze, "codemonkey@robacarp.com".freeze, "joel@sixarm.com".freeze]
  s.homepage = "http://github.com/robacarp/file_signature".freeze
  s.rubygems_version = "2.6.8".freeze
  s.summary = "File signature adds the ability to inspect the first few bytes of a file to guess at mime-type.".freeze

  s.installed_by_version = "2.6.8" if s.respond_to? :installed_by_version
end
