# Sravan's slock - simple screen locker

[slock](https://tools.suckless.org/slock/) is a simple screen locker utility for X.
This is Sravan's fork of slock with patches and custom modifications.

## slock Information

### Requirements

In order to build slock you need the Xlib header files.

### Installation

Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

    make clean install

### Running slock

Simply invoke the 'slock' command. To get out of it, enter your password.

## Personal Modifications

### Patches

* [blur pixelated screen](https://tools.suckless.org/slock/patches/blur-pixelated-screen/)
* [dpms](https://tools.suckless.org/slock/patches/dpms/)

### Modifications

* Update user and group in config
