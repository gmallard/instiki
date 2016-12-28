# -*- encoding: utf-8 -*-
# stub: test-unit 2.5.5 ruby lib

Gem::Specification.new do |s|
  s.name = "test-unit".freeze
  s.version = "2.5.5"

  s.required_rubygems_version = Gem::Requirement.new(">= 0".freeze) if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib".freeze]
  s.authors = ["Kouhei Sutou".freeze, "Haruka Yoshihara".freeze]
  s.date = "2013-05-18"
  s.description = "Ruby 1.9.x bundles minitest not Test::Unit. Test::Unit\nbundled in Ruby 1.8.x had not been improved but unbundled\nTest::Unit (test-unit) is improved actively.\n".freeze
  s.email = ["kou@cozmixng.org".freeze, "yoshihara@clear-code.com".freeze]
  s.homepage = "http://test-unit.rubyforge.org/".freeze
  s.licenses = ["Ruby's and PSFL (lib/test/unit/diff.rb)".freeze]
  s.rubyforge_project = "test-unit".freeze
  s.rubygems_version = "2.6.8".freeze
  s.summary = "test-unit - Improved version of Test::Unit bundled in Ruby 1.8.x.".freeze

  s.installed_by_version = "2.6.8" if s.respond_to? :installed_by_version

  if s.respond_to? :specification_version then
    s.specification_version = 3

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_development_dependency(%q<bundler>.freeze, [">= 0"])
      s.add_development_dependency(%q<rake>.freeze, [">= 0"])
      s.add_development_dependency(%q<yard>.freeze, [">= 0"])
      s.add_development_dependency(%q<RedCloth>.freeze, [">= 0"])
      s.add_development_dependency(%q<packnga>.freeze, [">= 0"])
    else
      s.add_dependency(%q<bundler>.freeze, [">= 0"])
      s.add_dependency(%q<rake>.freeze, [">= 0"])
      s.add_dependency(%q<yard>.freeze, [">= 0"])
      s.add_dependency(%q<RedCloth>.freeze, [">= 0"])
      s.add_dependency(%q<packnga>.freeze, [">= 0"])
    end
  else
    s.add_dependency(%q<bundler>.freeze, [">= 0"])
    s.add_dependency(%q<rake>.freeze, [">= 0"])
    s.add_dependency(%q<yard>.freeze, [">= 0"])
    s.add_dependency(%q<RedCloth>.freeze, [">= 0"])
    s.add_dependency(%q<packnga>.freeze, [">= 0"])
  end
end
