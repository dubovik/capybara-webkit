capybara-webkit
===============

A [capybara](https://github.com/jnicklas/capybara) driver that uses [WebKit](http://webkit.org) via [QtWebKit](http://doc.qt.nokia.com/4.7/qtwebkit.html).

Qt Dependency
-------------

capybara-webkit depends on a WebKit implementation from Qt, a cross-platform
development toolkit. You'll need to download the Qt libraries to build and
install the gem. You can find instructions for downloading and installing QT on
the [capybara-webkit wiki](https://github.com/thoughtbot/capybara-webkit/wiki/Installing-QT)

Reporting Issues
----------------

Without access to your application code we can't easily debug most crashes or
generic failures, so we've included a debug version of the driver that prints a
log of what happened during each test. Before filing a crash bug, please see
[Reporting Crashes](https://github.com/thoughtbot/capybara-webkit/wiki/Reporting-Crashes).
You're much more likely to get a fix if you follow those instructions.

If you are having compiling issues please post to the [mailing list](http://groups.google.com/group/capybara-webkit).

CI
--

If you're like us, you'll be using capybara-webkit on CI.

On Linux platforms, capybara-webkit requires an X server to run, although it doesn't create any visible windows. Xvfb works fine for this. You can setup Xvfb yourself and set a DISPLAY variable, or try out the [headless gem](https://github.com/leonid-shevtsov/headless).

Usage
-----

Add the capybara-webkit gem to your Gemfile:

    gem "capybara-webkit"

Set your Capybara Javascript driver to webkit:

    Capybara.javascript_driver = :webkit

In cucumber, tag scenarios with @javascript to run them using a headless WebKit browser.

In RSpec, use the :js => true flag.

Take note of the transactional fixtures section of the [capybara README](https://github.com/jnicklas/capybara/blob/master/README.md).

Setting Webkit options
----------------------

The capybara-webkit driver allows access to some of the underlying QtWebKit's
configuration options. You can use

    # to set a flag:
    driver.browser.set_attribute(:flag_name, true)

    # to unset a flag explicitly:
    driver.browser.set_attribute(:flag_name, false)

    # to reset a flag to default:
    driver.browser.reset_attribute(:flag_name)

Supported are the flag names listed below:

* `:auto_load_images`
* `:dns_prefetch_enabled`
* `:plugins_enabled`
* `:private_browsing_enabled`
* `:javascript_can_open_windows`
* `:javascript_can_access_clipboard`
* `:offline_storage_database_enabled`
* `:offline_web_application_cache_enabled`
* `:local_storage_enabled`
* `:local_storage_database_enabled`
* `:local_content_can_access_remote_urls`
* `:local_content_can_access_file_urls`
* `:accelerated_compositing_enabled`
* `:site_specific_quirks_enabled`

Please consult the [Qt documentation](http://doc.qt.nokia.com/stable/qwebsettings.html#WebAttribute-enum)
for more information about those options. If you need more flags to be supported,
please contact us.

Contributing
------------

See the CONTRIBUTING document.

About
-----

The capybara WebKit driver is maintained by Joe Ferris and Matt Mongeau. It was written by [thoughtbot, inc](http://thoughtbot.com/community) with the help of numerous [contributions from the open source community](https://github.com/thoughtbot/capybara-webkit/contributors).

Code for rendering the current webpage to a PNG is borrowed from Phantom.js' implementation.

![thoughtbot](http://thoughtbot.com/images/tm/logo.png)

The names and logos for thoughtbot are trademarks of thoughtbot, inc.

License
-------

capybara-webkit is Copyright (c) 2011 thoughtbot, inc. It is free software, and may be redistributed under the terms specified in the LICENSE file.
