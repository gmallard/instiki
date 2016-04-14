
= Instiki

Instiki is a wiki clone so pretty and easy to set up, you'll wonder if it’s really a wiki. Runs on Rails and focuses on portability and stability. Supports file uploads, PDF export, RSS, multiple users and password protection. Some use Instiki as a CMS (Content Management System) because of its ability to export static pages.

Instiki lowers the barriers of interest for when you might consider using a wiki. It's so simple to get running that you'll find yourself using it for anything -- taking notes, brainstorming, organizing a gathering.


== Supported Platforms

Instiki only relies on Ruby - the sole external dependency (it includes all other dependencies). Any OS that can run Ruby can run Instiki - that includes Windows, Linux, Mac OS X and most known Unix flavors.

Instiki on BeOS, Amiga OS, OS2, Zeta OS and support for various exotic Platforms is planned. Mostly it already works, if Ruby runs there (download the linux version in this case). Please contact parasew if you want to help out for your OS that is not listed. Please also get in touch if you are able to create an instiki package for your favorite unix or linux distribution.


== 3 easy Steps to get the Instiki experience

  Step 1. Get Instiki and run "ruby bundle install --path vendor/bundle"
  Step 2. Run "instiki"
  Step 3. Chuckle... "There's no step three!" (TM)
 

== Details

You need at least Ruby Version 1.8.6, and Rubygems 1.3.6, installed on your System. The second dependency is a Database System, but don't worry, the default sqlite3 will be installed for you, if it's not already installed. You can also use any other database system (MySQL, PostgreSQL, ...) supported by Rails.


=== If you are on Windows

- Get the *Ruby One-Click Installer - Windows* http://rubyforge.org/projects/rubyinstaller
- Get Development Kit http://github.com/oneclick/rubyinstaller/wiki/development-kit
- In the Instiki directory, execute "ruby bundle"
- double-click instiki.bat or instiki.cmd and there you go!

=== If you are on Mac OSX

On Leopard and Snow Leopard, you are all set.
- run "sudo gem update --system" via the command-line.
- run "ruby bundle install --path vendor/bundle" in the instiki directory.
- run "ruby instiki" and there you go!

Tiger ships with a really old Ruby Version (1.8.2) and a broken Readline Library you have to
- use the Ruby One-Click-Installer for OSX ( http://rubyosx.com ) if you don't already have macports' Ruby

=== If you are on Linux


=== Any other System

- get Ruby for your System, compile if nessesary: http://ruby-lang.org
- Depending on the version of Rubygems that came with your Ruby, you may need to

    sudo gem update --system
    
- get SQLite or compile from http://sqlite.org (you can also use mysql or any other supported database system if you want)
- run "ruby bundle install --path vendor/bundle"
- run instiki

You're now running a perfectly suitable wiki on port 2500 that'll present you with one-step setup, followed by a textarea for the home page on http://localhost:2500


== Features

* Regular expression search: Find deep stuff really fast
* Revisions: Follow the changes on every page from birth. Rollback to an earlier rev
* Export to HTML or markup in a zip: Take the entire wiki with you home or for reference
* RSS feeds to track recently revised pages
* Multiple webs: Create separate wikis with their own namespace
* Password-protected webs: Keep it private
* Authors: Each revision is associated with an author, so you can see who changed what
* Reference tracker: Which other pages are pointing to the current?
* Five markup choices:
   Markdown-based choices [http://daringfireball.net/projects/markdown/syntax]:
     Markdown+itex2MML (the default; requires itex2MML) 
     Markdown+BlahTeX/PNG (requires blahtex and a working TeX installation)
     Markdown
   Textile [http://www.textism.com/tools/textile]
   RDoc [http://rdoc.sourceforge.net/doc]
* Support for Math (using itex syntax [http://golem.ph.utexas.edu/~distler/blog/itex2MMLcommands.html]) 
* Support for WYSIWYG SVG editing -- embed SVG graphics right in your wiki page.
* Embedded webserver: uses Mongrel (if installed), or the bundled WEBrick webserver (if not).
* Internationalization: Wiki words in any latin, greek, cyrillian, or armenian characters
* Color diffs: Track changes through revisions
* Runs on SQLite3 per default, can be configured to run on PostgreSQL, MySQL, DB2, Firebird, Openbase, Oracle, SQL Server or Sybase


== Command-line options:

* Run "ruby instiki --help"


== History:

 * See CHANGELOG

== Migrating from Instiki 0.11-0.18 to 0.19

   ruby bundle install --path vendor/bundle
   ruby bundle exec rake upgrade_instiki
   
== Download the latest release from:

* http://rubyforge.org/project/showfiles.php?group_id=186


== Visit the Instiki wiki:

* http://golem.ph.utexas.edu/wiki/instiki/


== License:

* same as Ruby's


---

Authors::

Versions 0.0 to 0.9.1:: David Heinemeier Hansson
Email::  david[AT]loudthinking.com
Weblog:: http://www.loudthinking.com[http://www.loudthinking.com]

From 0.9.2 onwards:: Alexey Verkhovsky
Email:: alex[AT]verk.info

From 0.11 onwards:: Matthias Tarasiewicz and 5uper.net
Email:: parasew[AT]gmail.com
Website:: http://5uper.net[http://5uper.net]

From 0.13 onwards:: Matthias Tarasiewicz and Jacques Distler
Email:: instiki-devel[AT]rubyforge.org
Weblog Jacques: http://golem.ph.utexas.edu/~distler/blog/
Weblog Parasew: http://parasew.com
