# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/parallels/dune/dune

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/parallels/dune/dune

# Utility rule file for dune-version.

# Include any custom commands dependencies for this target.
include CMakeFiles/dune-version.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/dune-version.dir/progress.make

CMakeFiles/dune-version:
	/usr/bin/cmake -DPROJECT_SOURCE_DIR=/home/parallels/dune/dune -DDUNE_VERSION_TPL=src/DUNE/Version.cpp.in -DDUNE_VERSION_OUT=/home/parallels/dune/dune/DUNEGeneratedFiles/src/DUNE/Version.cpp -P cmake/Version.cmake

dune-version: CMakeFiles/dune-version
dune-version: CMakeFiles/dune-version.dir/build.make
.PHONY : dune-version

# Rule to build all files generated by this target.
CMakeFiles/dune-version.dir/build: dune-version
.PHONY : CMakeFiles/dune-version.dir/build

CMakeFiles/dune-version.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dune-version.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dune-version.dir/clean

CMakeFiles/dune-version.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/dune-version.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dune-version.dir/depend
