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
include CMakeFiles/Navigation.General.ROV.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Navigation.General.ROV.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Navigation.General.ROV.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Navigation.General.ROV.dir/flags.make

CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.o: CMakeFiles/Navigation.General.ROV.dir/flags.make
CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.o: src/Navigation/General/ROV/Task.cpp
CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.o: CMakeFiles/Navigation.General.ROV.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Navigation::General::ROV::Task, NavigationGeneralROVTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -MD -MT CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.o -MF CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.o.d -o CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.o -c /home/parallels/dune/dune/src/Navigation/General/ROV/Task.cpp

CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Navigation::General::ROV::Task, NavigationGeneralROVTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -E /home/parallels/dune/dune/src/Navigation/General/ROV/Task.cpp > CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.i

CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Navigation::General::ROV::Task, NavigationGeneralROVTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -S /home/parallels/dune/dune/src/Navigation/General/ROV/Task.cpp -o CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.s

# Object files for target Navigation.General.ROV
Navigation_General_ROV_OBJECTS = \
"CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.o"

# External object files for target Navigation.General.ROV
Navigation_General_ROV_EXTERNAL_OBJECTS =

libNavigation.General.ROV.a: CMakeFiles/Navigation.General.ROV.dir/src/Navigation/General/ROV/Task.cpp.o
libNavigation.General.ROV.a: CMakeFiles/Navigation.General.ROV.dir/build.make
libNavigation.General.ROV.a: CMakeFiles/Navigation.General.ROV.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libNavigation.General.ROV.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Navigation.General.ROV.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Navigation.General.ROV.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Navigation.General.ROV.dir/build: libNavigation.General.ROV.a
.PHONY : CMakeFiles/Navigation.General.ROV.dir/build

CMakeFiles/Navigation.General.ROV.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Navigation.General.ROV.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Navigation.General.ROV.dir/clean

CMakeFiles/Navigation.General.ROV.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/Navigation.General.ROV.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Navigation.General.ROV.dir/depend
