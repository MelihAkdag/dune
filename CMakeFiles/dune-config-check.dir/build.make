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

# Include any dependencies generated for this target.
include CMakeFiles/dune-config-check.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/dune-config-check.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/dune-config-check.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dune-config-check.dir/flags.make

CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.o: CMakeFiles/dune-config-check.dir/flags.make
CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.o: programs/utils/dune-config-check.cpp
CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.o: CMakeFiles/dune-config-check.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.o -MF CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.o.d -o CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.o -c /home/parallels/dune/dune/programs/utils/dune-config-check.cpp

CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/dune/dune/programs/utils/dune-config-check.cpp > CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.i

CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/dune/dune/programs/utils/dune-config-check.cpp -o CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.s

# Object files for target dune-config-check
dune__config__check_OBJECTS = \
"CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.o"

# External object files for target dune-config-check
dune__config__check_EXTERNAL_OBJECTS =

dune-config-check: CMakeFiles/dune-config-check.dir/programs/utils/dune-config-check.cpp.o
dune-config-check: CMakeFiles/dune-config-check.dir/build.make
dune-config-check: libdune-core.a
dune-config-check: CMakeFiles/dune-config-check.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dune-config-check"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dune-config-check.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dune-config-check.dir/build: dune-config-check
.PHONY : CMakeFiles/dune-config-check.dir/build

CMakeFiles/dune-config-check.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dune-config-check.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dune-config-check.dir/clean

CMakeFiles/dune-config-check.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/dune-config-check.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dune-config-check.dir/depend

