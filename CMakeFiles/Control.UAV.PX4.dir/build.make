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
include CMakeFiles/Control.UAV.PX4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Control.UAV.PX4.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Control.UAV.PX4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Control.UAV.PX4.dir/flags.make

CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.o: CMakeFiles/Control.UAV.PX4.dir/flags.make
CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.o: src/Control/UAV/PX4/Task.cpp
CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.o: CMakeFiles/Control.UAV.PX4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Control::UAV::PX4::Task, ControlUAVPX4Task)"  -Wno-address-of-packed-member -Wno-ignored-qualifiers -Wno-array-bounds -Wno-stringop-overread  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -MD -MT CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.o -MF CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.o.d -o CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.o -c /home/parallels/dune/dune/src/Control/UAV/PX4/Task.cpp

CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Control::UAV::PX4::Task, ControlUAVPX4Task)"  -Wno-address-of-packed-member -Wno-ignored-qualifiers -Wno-array-bounds -Wno-stringop-overread  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -E /home/parallels/dune/dune/src/Control/UAV/PX4/Task.cpp > CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.i

CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Control::UAV::PX4::Task, ControlUAVPX4Task)"  -Wno-address-of-packed-member -Wno-ignored-qualifiers -Wno-array-bounds -Wno-stringop-overread  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -S /home/parallels/dune/dune/src/Control/UAV/PX4/Task.cpp -o CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.s

# Object files for target Control.UAV.PX4
Control_UAV_PX4_OBJECTS = \
"CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.o"

# External object files for target Control.UAV.PX4
Control_UAV_PX4_EXTERNAL_OBJECTS =

libControl.UAV.PX4.a: CMakeFiles/Control.UAV.PX4.dir/src/Control/UAV/PX4/Task.cpp.o
libControl.UAV.PX4.a: CMakeFiles/Control.UAV.PX4.dir/build.make
libControl.UAV.PX4.a: CMakeFiles/Control.UAV.PX4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libControl.UAV.PX4.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Control.UAV.PX4.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Control.UAV.PX4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Control.UAV.PX4.dir/build: libControl.UAV.PX4.a
.PHONY : CMakeFiles/Control.UAV.PX4.dir/build

CMakeFiles/Control.UAV.PX4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Control.UAV.PX4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Control.UAV.PX4.dir/clean

CMakeFiles/Control.UAV.PX4.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/Control.UAV.PX4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Control.UAV.PX4.dir/depend

