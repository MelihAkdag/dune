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

# Utility rule file for i18n_texts.

# Include any custom commands dependencies for this target.
include CMakeFiles/i18n_texts.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/i18n_texts.dir/progress.make

CMakeFiles/i18n_texts:
	/usr/bin/python /home/parallels/dune/dune/programs/scripts/dune-extract-elabels.py /home/parallels/dune/dune/etc /home/parallels/dune/dune/i18n/entity_labels.txt

i18n_texts: CMakeFiles/i18n_texts
i18n_texts: CMakeFiles/i18n_texts.dir/build.make
.PHONY : i18n_texts

# Rule to build all files generated by this target.
CMakeFiles/i18n_texts.dir/build: i18n_texts
.PHONY : CMakeFiles/i18n_texts.dir/build

CMakeFiles/i18n_texts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/i18n_texts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/i18n_texts.dir/clean

CMakeFiles/i18n_texts.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/i18n_texts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/i18n_texts.dir/depend
