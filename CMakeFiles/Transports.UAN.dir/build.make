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
include CMakeFiles/Transports.UAN.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Transports.UAN.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Transports.UAN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Transports.UAN.dir/flags.make

CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.o: CMakeFiles/Transports.UAN.dir/flags.make
CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.o: src/Transports/UAN/Task.cpp
CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.o: CMakeFiles/Transports.UAN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Transports::UAN::Task, TransportsUANTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -MD -MT CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.o -MF CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.o.d -o CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.o -c /home/parallels/dune/dune/src/Transports/UAN/Task.cpp

CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Transports::UAN::Task, TransportsUANTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -E /home/parallels/dune/dune/src/Transports/UAN/Task.cpp > CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.i

CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Transports::UAN::Task, TransportsUANTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -S /home/parallels/dune/dune/src/Transports/UAN/Task.cpp -o CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.s

# Object files for target Transports.UAN
Transports_UAN_OBJECTS = \
"CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.o"

# External object files for target Transports.UAN
Transports_UAN_EXTERNAL_OBJECTS =

libTransports.UAN.a: CMakeFiles/Transports.UAN.dir/src/Transports/UAN/Task.cpp.o
libTransports.UAN.a: CMakeFiles/Transports.UAN.dir/build.make
libTransports.UAN.a: CMakeFiles/Transports.UAN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libTransports.UAN.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Transports.UAN.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Transports.UAN.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Transports.UAN.dir/build: libTransports.UAN.a
.PHONY : CMakeFiles/Transports.UAN.dir/build

CMakeFiles/Transports.UAN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Transports.UAN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Transports.UAN.dir/clean

CMakeFiles/Transports.UAN.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/Transports.UAN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Transports.UAN.dir/depend
