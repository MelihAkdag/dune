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
include CMakeFiles/usbl_evaluation.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/usbl_evaluation.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/usbl_evaluation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/usbl_evaluation.dir/flags.make

CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.o: CMakeFiles/usbl_evaluation.dir/flags.make
CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.o: programs/usbl_evaluation.cpp
CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.o: CMakeFiles/usbl_evaluation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.o -MF CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.o.d -o CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.o -c /home/parallels/dune/dune/programs/usbl_evaluation.cpp

CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/dune/dune/programs/usbl_evaluation.cpp > CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.i

CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/dune/dune/programs/usbl_evaluation.cpp -o CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.s

# Object files for target usbl_evaluation
usbl_evaluation_OBJECTS = \
"CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.o"

# External object files for target usbl_evaluation
usbl_evaluation_EXTERNAL_OBJECTS =

usbl_evaluation: CMakeFiles/usbl_evaluation.dir/programs/usbl_evaluation.cpp.o
usbl_evaluation: CMakeFiles/usbl_evaluation.dir/build.make
usbl_evaluation: libdune-core.a
usbl_evaluation: CMakeFiles/usbl_evaluation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable usbl_evaluation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/usbl_evaluation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/usbl_evaluation.dir/build: usbl_evaluation
.PHONY : CMakeFiles/usbl_evaluation.dir/build

CMakeFiles/usbl_evaluation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/usbl_evaluation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/usbl_evaluation.dir/clean

CMakeFiles/usbl_evaluation.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/usbl_evaluation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/usbl_evaluation.dir/depend
