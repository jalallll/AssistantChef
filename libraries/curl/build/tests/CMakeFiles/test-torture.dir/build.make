# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hho68/cs3307/group12/libraries/curl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hho68/cs3307/group12/libraries/curl/build

# Utility rule file for test-torture.

# Include any custom commands dependencies for this target.
include tests/CMakeFiles/test-torture.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test-torture.dir/progress.make

tests/CMakeFiles/test-torture:
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests && /usr/bin/perl /home/hho68/cs3307/group12/libraries/curl/tests/runtests.pl -a -t "\$$TFLAGS"

test-torture: tests/CMakeFiles/test-torture
test-torture: tests/CMakeFiles/test-torture.dir/build.make
.PHONY : test-torture

# Rule to build all files generated by this target.
tests/CMakeFiles/test-torture.dir/build: test-torture
.PHONY : tests/CMakeFiles/test-torture.dir/build

tests/CMakeFiles/test-torture.dir/clean:
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test-torture.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test-torture.dir/clean

tests/CMakeFiles/test-torture.dir/depend:
	cd /home/hho68/cs3307/group12/libraries/curl/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hho68/cs3307/group12/libraries/curl /home/hho68/cs3307/group12/libraries/curl/tests /home/hho68/cs3307/group12/libraries/curl/build /home/hho68/cs3307/group12/libraries/curl/build/tests /home/hho68/cs3307/group12/libraries/curl/build/tests/CMakeFiles/test-torture.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test-torture.dir/depend

