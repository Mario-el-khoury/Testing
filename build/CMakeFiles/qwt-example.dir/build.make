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
CMAKE_SOURCE_DIR = /home/mario/Test/qwt-example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mario/Test/qwt-example/build

# Include any dependencies generated for this target.
include CMakeFiles/qwt-example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qwt-example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qwt-example.dir/flags.make

CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.o: CMakeFiles/qwt-example.dir/flags.make
CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.o: qwt-example_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mario/Test/qwt-example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.o -c /home/mario/Test/qwt-example/build/qwt-example_autogen/mocs_compilation.cpp

CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mario/Test/qwt-example/build/qwt-example_autogen/mocs_compilation.cpp > CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.i

CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mario/Test/qwt-example/build/qwt-example_autogen/mocs_compilation.cpp -o CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.s

CMakeFiles/qwt-example.dir/window.cpp.o: CMakeFiles/qwt-example.dir/flags.make
CMakeFiles/qwt-example.dir/window.cpp.o: ../window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mario/Test/qwt-example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qwt-example.dir/window.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qwt-example.dir/window.cpp.o -c /home/mario/Test/qwt-example/window.cpp

CMakeFiles/qwt-example.dir/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qwt-example.dir/window.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mario/Test/qwt-example/window.cpp > CMakeFiles/qwt-example.dir/window.cpp.i

CMakeFiles/qwt-example.dir/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qwt-example.dir/window.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mario/Test/qwt-example/window.cpp -o CMakeFiles/qwt-example.dir/window.cpp.s

CMakeFiles/qwt-example.dir/main.cpp.o: CMakeFiles/qwt-example.dir/flags.make
CMakeFiles/qwt-example.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mario/Test/qwt-example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qwt-example.dir/main.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qwt-example.dir/main.cpp.o -c /home/mario/Test/qwt-example/main.cpp

CMakeFiles/qwt-example.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qwt-example.dir/main.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mario/Test/qwt-example/main.cpp > CMakeFiles/qwt-example.dir/main.cpp.i

CMakeFiles/qwt-example.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qwt-example.dir/main.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mario/Test/qwt-example/main.cpp -o CMakeFiles/qwt-example.dir/main.cpp.s

# Object files for target qwt-example
qwt__example_OBJECTS = \
"CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/qwt-example.dir/window.cpp.o" \
"CMakeFiles/qwt-example.dir/main.cpp.o"

# External object files for target qwt-example
qwt__example_EXTERNAL_OBJECTS =

qwt-example: CMakeFiles/qwt-example.dir/qwt-example_autogen/mocs_compilation.cpp.o
qwt-example: CMakeFiles/qwt-example.dir/window.cpp.o
qwt-example: CMakeFiles/qwt-example.dir/main.cpp.o
qwt-example: CMakeFiles/qwt-example.dir/build.make
qwt-example: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
qwt-example: /usr/lib/x86_64-linux-gnu/libQt5Multimedia.so.5.12.8
qwt-example: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
qwt-example: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.12.8
qwt-example: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
qwt-example: CMakeFiles/qwt-example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mario/Test/qwt-example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable qwt-example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qwt-example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qwt-example.dir/build: qwt-example

.PHONY : CMakeFiles/qwt-example.dir/build

CMakeFiles/qwt-example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qwt-example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qwt-example.dir/clean

CMakeFiles/qwt-example.dir/depend:
	cd /home/mario/Test/qwt-example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mario/Test/qwt-example /home/mario/Test/qwt-example /home/mario/Test/qwt-example/build /home/mario/Test/qwt-example/build /home/mario/Test/qwt-example/build/CMakeFiles/qwt-example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qwt-example.dir/depend

