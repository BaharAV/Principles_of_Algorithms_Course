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
CMAKE_SOURCE_DIR = C:\Users\bahar\Desktop\roodkhane

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bahar\Desktop\roodkhane\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/roodkhane.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/roodkhane.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/roodkhane.dir/flags.make

CMakeFiles/roodkhane.dir/main.cpp.obj: CMakeFiles/roodkhane.dir/flags.make
CMakeFiles/roodkhane.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bahar\Desktop\roodkhane\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/roodkhane.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\roodkhane.dir\main.cpp.obj -c C:\Users\bahar\Desktop\roodkhane\main.cpp

CMakeFiles/roodkhane.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roodkhane.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bahar\Desktop\roodkhane\main.cpp > CMakeFiles\roodkhane.dir\main.cpp.i

CMakeFiles/roodkhane.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roodkhane.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\bahar\Desktop\roodkhane\main.cpp -o CMakeFiles\roodkhane.dir\main.cpp.s

# Object files for target roodkhane
roodkhane_OBJECTS = \
"CMakeFiles/roodkhane.dir/main.cpp.obj"

# External object files for target roodkhane
roodkhane_EXTERNAL_OBJECTS =

roodkhane.exe: CMakeFiles/roodkhane.dir/main.cpp.obj
roodkhane.exe: CMakeFiles/roodkhane.dir/build.make
roodkhane.exe: CMakeFiles/roodkhane.dir/linklibs.rsp
roodkhane.exe: CMakeFiles/roodkhane.dir/objects1.rsp
roodkhane.exe: CMakeFiles/roodkhane.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bahar\Desktop\roodkhane\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable roodkhane.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\roodkhane.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/roodkhane.dir/build: roodkhane.exe

.PHONY : CMakeFiles/roodkhane.dir/build

CMakeFiles/roodkhane.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\roodkhane.dir\cmake_clean.cmake
.PHONY : CMakeFiles/roodkhane.dir/clean

CMakeFiles/roodkhane.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bahar\Desktop\roodkhane C:\Users\bahar\Desktop\roodkhane C:\Users\bahar\Desktop\roodkhane\cmake-build-debug C:\Users\bahar\Desktop\roodkhane\cmake-build-debug C:\Users\bahar\Desktop\roodkhane\cmake-build-debug\CMakeFiles\roodkhane.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/roodkhane.dir/depend

