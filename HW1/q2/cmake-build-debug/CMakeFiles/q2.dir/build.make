# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\bahar\Desktop\hw1\q2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bahar\Desktop\hw1\q2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/q2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/q2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/q2.dir/flags.make

CMakeFiles/q2.dir/main.cpp.obj: CMakeFiles/q2.dir/flags.make
CMakeFiles/q2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bahar\Desktop\hw1\q2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/q2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\q2.dir\main.cpp.obj -c C:\Users\bahar\Desktop\hw1\q2\main.cpp

CMakeFiles/q2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/q2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bahar\Desktop\hw1\q2\main.cpp > CMakeFiles\q2.dir\main.cpp.i

CMakeFiles/q2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/q2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\bahar\Desktop\hw1\q2\main.cpp -o CMakeFiles\q2.dir\main.cpp.s

# Object files for target q2
q2_OBJECTS = \
"CMakeFiles/q2.dir/main.cpp.obj"

# External object files for target q2
q2_EXTERNAL_OBJECTS =

q2.exe: CMakeFiles/q2.dir/main.cpp.obj
q2.exe: CMakeFiles/q2.dir/build.make
q2.exe: CMakeFiles/q2.dir/linklibs.rsp
q2.exe: CMakeFiles/q2.dir/objects1.rsp
q2.exe: CMakeFiles/q2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bahar\Desktop\hw1\q2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable q2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\q2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/q2.dir/build: q2.exe

.PHONY : CMakeFiles/q2.dir/build

CMakeFiles/q2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\q2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/q2.dir/clean

CMakeFiles/q2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bahar\Desktop\hw1\q2 C:\Users\bahar\Desktop\hw1\q2 C:\Users\bahar\Desktop\hw1\q2\cmake-build-debug C:\Users\bahar\Desktop\hw1\q2\cmake-build-debug C:\Users\bahar\Desktop\hw1\q2\cmake-build-debug\CMakeFiles\q2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/q2.dir/depend
