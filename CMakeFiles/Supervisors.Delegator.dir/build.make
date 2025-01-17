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
include CMakeFiles/Supervisors.Delegator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Supervisors.Delegator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Supervisors.Delegator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Supervisors.Delegator.dir/flags.make

CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.o: CMakeFiles/Supervisors.Delegator.dir/flags.make
CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.o: src/Supervisors/Delegator/Task.cpp
CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.o: CMakeFiles/Supervisors.Delegator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Supervisors::Delegator::Task, SupervisorsDelegatorTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -MD -MT CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.o -MF CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.o.d -o CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.o -c /home/parallels/dune/dune/src/Supervisors/Delegator/Task.cpp

CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Supervisors::Delegator::Task, SupervisorsDelegatorTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -E /home/parallels/dune/dune/src/Supervisors/Delegator/Task.cpp > CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.i

CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Supervisors::Delegator::Task, SupervisorsDelegatorTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -S /home/parallels/dune/dune/src/Supervisors/Delegator/Task.cpp -o CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.s

# Object files for target Supervisors.Delegator
Supervisors_Delegator_OBJECTS = \
"CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.o"

# External object files for target Supervisors.Delegator
Supervisors_Delegator_EXTERNAL_OBJECTS =

libSupervisors.Delegator.a: CMakeFiles/Supervisors.Delegator.dir/src/Supervisors/Delegator/Task.cpp.o
libSupervisors.Delegator.a: CMakeFiles/Supervisors.Delegator.dir/build.make
libSupervisors.Delegator.a: CMakeFiles/Supervisors.Delegator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libSupervisors.Delegator.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Supervisors.Delegator.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Supervisors.Delegator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Supervisors.Delegator.dir/build: libSupervisors.Delegator.a
.PHONY : CMakeFiles/Supervisors.Delegator.dir/build

CMakeFiles/Supervisors.Delegator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Supervisors.Delegator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Supervisors.Delegator.dir/clean

CMakeFiles/Supervisors.Delegator.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/Supervisors.Delegator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Supervisors.Delegator.dir/depend

