# slock - simple screen locker

Sravan's custom build of slock. Original slock build by suckless team found here: [https://tools.suckless.org/slock/](https://tools.suckless.org/slock/)

## Requirements

In order to build slock you need the Xlib header files.

## Installation

Edit [config.mk](config.mk) to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

```
make clean install
```

## Running slock

Simply invoke the `slock` command. To get out of it, enter your password.

## Configuration

The configuration of slock is done by creating a custom config.h and (re)compiling the source code.

## Patches

Most patches can be found on the suckless website: [https://tools.suckless.org/slock/patches/](https://tools.suckless.org/slock/patches/)

* [capscolor](https://tools.suckless.org/slock/patches/capscolor/) - Introduces an additional color to indicate the state of Caps Lock.
* [mediakeys](https://tools.suckless.org/slock/patches/mediakeys/) - Allows use of media keys while screen is locked
