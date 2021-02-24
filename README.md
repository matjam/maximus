This is the awesome MAXIMUS BBS software, written originally by Wes Garland.

# Fork Notes

This was originally forked from https://code.georgi.software/IfkEE/max-bbs/ because there was some build issues and I wanted to work on my own branch. The person who has started work there, Patrick Georgi is responsible for most of the fixes in this branch. I am not sure how much I will add, but if I do add anything I'll be sure to share with him.

# Building

Patrick has kindly fixed the build system to use meson. Simply install meson, and then

```
meson setup builddir
cd builddir
ninja
```

As long as you have all the prerequisites installed, it should build. You can then do

```
sudo ninja install
```

and binaries will be installed. You may need to do some extra setup to get it working, but thats all I know for now.


