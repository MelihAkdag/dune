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
include CMakeFiles/UserInterfaces.MantaPanel.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/UserInterfaces.MantaPanel.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/UserInterfaces.MantaPanel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UserInterfaces.MantaPanel.dir/flags.make

CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.o: CMakeFiles/UserInterfaces.MantaPanel.dir/flags.make
CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.o: src/UserInterfaces/MantaPanel/Task.cpp
CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.o: CMakeFiles/UserInterfaces.MantaPanel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::UserInterfaces::MantaPanel::Task, UserInterfacesMantaPanelTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -MD -MT CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.o -MF CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.o.d -o CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.o -c /home/parallels/dune/dune/src/UserInterfaces/MantaPanel/Task.cpp

CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::UserInterfaces::MantaPanel::Task, UserInterfacesMantaPanelTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -E /home/parallels/dune/dune/src/UserInterfaces/MantaPanel/Task.cpp > CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.i

CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::UserInterfaces::MantaPanel::Task, UserInterfacesMantaPanelTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -S /home/parallels/dune/dune/src/UserInterfaces/MantaPanel/Task.cpp -o CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.s

# Object files for target UserInterfaces.MantaPanel
UserInterfaces_MantaPanel_OBJECTS = \
"CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.o"

# External object files for target UserInterfaces.MantaPanel
UserInterfaces_MantaPanel_EXTERNAL_OBJECTS =

libUserInterfaces.MantaPanel.a: CMakeFiles/UserInterfaces.MantaPanel.dir/src/UserInterfaces/MantaPanel/Task.cpp.o
libUserInterfaces.MantaPanel.a: CMakeFiles/UserInterfaces.MantaPanel.dir/build.make
libUserInterfaces.MantaPanel.a: CMakeFiles/UserInterfaces.MantaPanel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libUserInterfaces.MantaPanel.a"
	$(CMAKE_COMMAND) -P CMakeFiles/UserInterfaces.MantaPanel.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UserInterfaces.MantaPanel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UserInterfaces.MantaPanel.dir/build: libUserInterfaces.MantaPanel.a
.PHONY : CMakeFiles/UserInterfaces.MantaPanel.dir/build

CMakeFiles/UserInterfaces.MantaPanel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UserInterfaces.MantaPanel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UserInterfaces.MantaPanel.dir/clean

CMakeFiles/UserInterfaces.MantaPanel.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/UserInterfaces.MantaPanel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UserInterfaces.MantaPanel.dir/depend
