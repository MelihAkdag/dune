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
include CMakeFiles/Transports.TCP.Client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Transports.TCP.Client.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Transports.TCP.Client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Transports.TCP.Client.dir/flags.make

CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.o: CMakeFiles/Transports.TCP.Client.dir/flags.make
CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.o: src/Transports/TCP/Client/Task.cpp
CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.o: CMakeFiles/Transports.TCP.Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Transports::TCP::Client::Task, TransportsTCPClientTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -MD -MT CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.o -MF CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.o.d -o CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.o -c /home/parallels/dune/dune/src/Transports/TCP/Client/Task.cpp

CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Transports::TCP::Client::Task, TransportsTCPClientTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -E /home/parallels/dune/dune/src/Transports/TCP/Client/Task.cpp > CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.i

CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Transports::TCP::Client::Task, TransportsTCPClientTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -S /home/parallels/dune/dune/src/Transports/TCP/Client/Task.cpp -o CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.s

# Object files for target Transports.TCP.Client
Transports_TCP_Client_OBJECTS = \
"CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.o"

# External object files for target Transports.TCP.Client
Transports_TCP_Client_EXTERNAL_OBJECTS =

libTransports.TCP.Client.a: CMakeFiles/Transports.TCP.Client.dir/src/Transports/TCP/Client/Task.cpp.o
libTransports.TCP.Client.a: CMakeFiles/Transports.TCP.Client.dir/build.make
libTransports.TCP.Client.a: CMakeFiles/Transports.TCP.Client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/dune/dune/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libTransports.TCP.Client.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Transports.TCP.Client.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Transports.TCP.Client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Transports.TCP.Client.dir/build: libTransports.TCP.Client.a
.PHONY : CMakeFiles/Transports.TCP.Client.dir/build

CMakeFiles/Transports.TCP.Client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Transports.TCP.Client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Transports.TCP.Client.dir/clean

CMakeFiles/Transports.TCP.Client.dir/depend:
	cd /home/parallels/dune/dune && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune /home/parallels/dune/dune/CMakeFiles/Transports.TCP.Client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Transports.TCP.Client.dir/depend

