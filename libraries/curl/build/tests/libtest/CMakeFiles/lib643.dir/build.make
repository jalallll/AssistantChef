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

# Include any dependencies generated for this target.
include tests/libtest/CMakeFiles/lib643.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/libtest/CMakeFiles/lib643.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/libtest/CMakeFiles/lib643.dir/progress.make

# Include the compile flags for this target's objects.
include tests/libtest/CMakeFiles/lib643.dir/flags.make

tests/libtest/CMakeFiles/lib643.dir/lib643.c.o: tests/libtest/CMakeFiles/lib643.dir/flags.make
tests/libtest/CMakeFiles/lib643.dir/lib643.c.o: ../tests/libtest/lib643.c
tests/libtest/CMakeFiles/lib643.dir/lib643.c.o: tests/libtest/CMakeFiles/lib643.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hho68/cs3307/group12/libraries/curl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/libtest/CMakeFiles/lib643.dir/lib643.c.o"
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest && /usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/libtest/CMakeFiles/lib643.dir/lib643.c.o -MF CMakeFiles/lib643.dir/lib643.c.o.d -o CMakeFiles/lib643.dir/lib643.c.o -c /home/hho68/cs3307/group12/libraries/curl/tests/libtest/lib643.c

tests/libtest/CMakeFiles/lib643.dir/lib643.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lib643.dir/lib643.c.i"
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest && /usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hho68/cs3307/group12/libraries/curl/tests/libtest/lib643.c > CMakeFiles/lib643.dir/lib643.c.i

tests/libtest/CMakeFiles/lib643.dir/lib643.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lib643.dir/lib643.c.s"
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest && /usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hho68/cs3307/group12/libraries/curl/tests/libtest/lib643.c -o CMakeFiles/lib643.dir/lib643.c.s

tests/libtest/CMakeFiles/lib643.dir/first.c.o: tests/libtest/CMakeFiles/lib643.dir/flags.make
tests/libtest/CMakeFiles/lib643.dir/first.c.o: ../tests/libtest/first.c
tests/libtest/CMakeFiles/lib643.dir/first.c.o: tests/libtest/CMakeFiles/lib643.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hho68/cs3307/group12/libraries/curl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object tests/libtest/CMakeFiles/lib643.dir/first.c.o"
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest && /usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/libtest/CMakeFiles/lib643.dir/first.c.o -MF CMakeFiles/lib643.dir/first.c.o.d -o CMakeFiles/lib643.dir/first.c.o -c /home/hho68/cs3307/group12/libraries/curl/tests/libtest/first.c

tests/libtest/CMakeFiles/lib643.dir/first.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lib643.dir/first.c.i"
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest && /usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hho68/cs3307/group12/libraries/curl/tests/libtest/first.c > CMakeFiles/lib643.dir/first.c.i

tests/libtest/CMakeFiles/lib643.dir/first.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lib643.dir/first.c.s"
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest && /usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hho68/cs3307/group12/libraries/curl/tests/libtest/first.c -o CMakeFiles/lib643.dir/first.c.s

# Object files for target lib643
lib643_OBJECTS = \
"CMakeFiles/lib643.dir/lib643.c.o" \
"CMakeFiles/lib643.dir/first.c.o"

# External object files for target lib643
lib643_EXTERNAL_OBJECTS =

tests/libtest/lib643: tests/libtest/CMakeFiles/lib643.dir/lib643.c.o
tests/libtest/lib643: tests/libtest/CMakeFiles/lib643.dir/first.c.o
tests/libtest/lib643: tests/libtest/CMakeFiles/lib643.dir/build.make
tests/libtest/lib643: lib/libcurl.so
tests/libtest/lib643: /usr/lib64/libssl.so
tests/libtest/lib643: /usr/lib64/libcrypto.so
tests/libtest/lib643: /usr/lib64/libz.so
tests/libtest/lib643: tests/libtest/CMakeFiles/lib643.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hho68/cs3307/group12/libraries/curl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable lib643"
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib643.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/libtest/CMakeFiles/lib643.dir/build: tests/libtest/lib643
.PHONY : tests/libtest/CMakeFiles/lib643.dir/build

tests/libtest/CMakeFiles/lib643.dir/clean:
	cd /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest && $(CMAKE_COMMAND) -P CMakeFiles/lib643.dir/cmake_clean.cmake
.PHONY : tests/libtest/CMakeFiles/lib643.dir/clean

tests/libtest/CMakeFiles/lib643.dir/depend:
	cd /home/hho68/cs3307/group12/libraries/curl/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hho68/cs3307/group12/libraries/curl /home/hho68/cs3307/group12/libraries/curl/tests/libtest /home/hho68/cs3307/group12/libraries/curl/build /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest /home/hho68/cs3307/group12/libraries/curl/build/tests/libtest/CMakeFiles/lib643.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/libtest/CMakeFiles/lib643.dir/depend
