# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nirvana/NET_X/adapter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nirvana/NET_X/adapter/build

# Include any dependencies generated for this target.
include CMakeFiles/adapter_pattern.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/adapter_pattern.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/adapter_pattern.dir/flags.make

CMakeFiles/adapter_pattern.dir/main.cpp.o: CMakeFiles/adapter_pattern.dir/flags.make
CMakeFiles/adapter_pattern.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nirvana/NET_X/adapter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/adapter_pattern.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/adapter_pattern.dir/main.cpp.o -c /home/nirvana/NET_X/adapter/main.cpp

CMakeFiles/adapter_pattern.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/adapter_pattern.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nirvana/NET_X/adapter/main.cpp > CMakeFiles/adapter_pattern.dir/main.cpp.i

CMakeFiles/adapter_pattern.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/adapter_pattern.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nirvana/NET_X/adapter/main.cpp -o CMakeFiles/adapter_pattern.dir/main.cpp.s

CMakeFiles/adapter_pattern.dir/Adapter.cpp.o: CMakeFiles/adapter_pattern.dir/flags.make
CMakeFiles/adapter_pattern.dir/Adapter.cpp.o: ../Adapter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nirvana/NET_X/adapter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/adapter_pattern.dir/Adapter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/adapter_pattern.dir/Adapter.cpp.o -c /home/nirvana/NET_X/adapter/Adapter.cpp

CMakeFiles/adapter_pattern.dir/Adapter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/adapter_pattern.dir/Adapter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nirvana/NET_X/adapter/Adapter.cpp > CMakeFiles/adapter_pattern.dir/Adapter.cpp.i

CMakeFiles/adapter_pattern.dir/Adapter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/adapter_pattern.dir/Adapter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nirvana/NET_X/adapter/Adapter.cpp -o CMakeFiles/adapter_pattern.dir/Adapter.cpp.s

# Object files for target adapter_pattern
adapter_pattern_OBJECTS = \
"CMakeFiles/adapter_pattern.dir/main.cpp.o" \
"CMakeFiles/adapter_pattern.dir/Adapter.cpp.o"

# External object files for target adapter_pattern
adapter_pattern_EXTERNAL_OBJECTS =

adapter_pattern: CMakeFiles/adapter_pattern.dir/main.cpp.o
adapter_pattern: CMakeFiles/adapter_pattern.dir/Adapter.cpp.o
adapter_pattern: CMakeFiles/adapter_pattern.dir/build.make
adapter_pattern: CMakeFiles/adapter_pattern.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nirvana/NET_X/adapter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable adapter_pattern"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/adapter_pattern.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/adapter_pattern.dir/build: adapter_pattern

.PHONY : CMakeFiles/adapter_pattern.dir/build

CMakeFiles/adapter_pattern.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/adapter_pattern.dir/cmake_clean.cmake
.PHONY : CMakeFiles/adapter_pattern.dir/clean

CMakeFiles/adapter_pattern.dir/depend:
	cd /home/nirvana/NET_X/adapter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nirvana/NET_X/adapter /home/nirvana/NET_X/adapter /home/nirvana/NET_X/adapter/build /home/nirvana/NET_X/adapter/build /home/nirvana/NET_X/adapter/build/CMakeFiles/adapter_pattern.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/adapter_pattern.dir/depend

