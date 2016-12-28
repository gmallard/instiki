# -*- encoding: utf-8 -*-
# stub: rails_xss 0.4.0 ruby lib

Gem::Specification.new do |s|
  s.name = "rails_xss".freeze
  s.version = "0.4.0"

  s.required_rubygems_version = Gem::Requirement.new(">= 0".freeze) if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib".freeze]
  s.authors = ["joloudov".freeze]
  s.date = "2013-02-15"
  s.description = "This plugin replaces the default ERB template handlers with erubis, and switches the behaviour to escape by default rather than requiring you to escape. This is consistent with the behaviour in Rails 3.0.".freeze
  s.email = "joloudov@gmail.com".freeze
  s.extra_rdoc_files = ["README.markdown".freeze]
  s.files = ["README.markdown".freeze]
  s.homepage = "http://github.com/joloudov/rails_xss".freeze
  s.rubygems_version = "2.6.8".freeze
  s.summary = "A plugin for rails 2.3 apps which switches the default to escape by default".freeze

  s.installed_by_version = "2.6.8" if s.respond_to? :installed_by_version

  if s.respond_to? :specification_version then
    s.specification_version = 3

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_development_dependency(%q<erubis>.freeze, [">= 2.6.5"])
    else
      s.add_dependency(%q<erubis>.freeze, [">= 2.6.5"])
    end
  else
    s.add_dependency(%q<erubis>.freeze, [">= 2.6.5"])
  end
end
