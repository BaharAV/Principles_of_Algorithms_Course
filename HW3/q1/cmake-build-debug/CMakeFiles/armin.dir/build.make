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
CMAKE_SOURCE_DIR = C:\Users\bahar\Desktop\armin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bahar\Desktop\armin\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/armin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/armin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/armin.dir/flags.make

CMakeFiles/armin.dir/main.cpp.obj: CMakeFiles/armin.dir/flags.make
CMakeFiles/armin.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bahar\Desktop\armin\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/armin.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\armin.dir\main.cpp.obj -c C:\Users\bahar\Desktop\armin\main.cpp

CMakeFiles/armin.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/armin.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bahar\Desktop\armin\main.cpp > CMakeFiles\armin.dir\main.cpp.i

CMakeFiles/armin.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/armin.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\bahar\Desktop\armin\main.cpp -o CMakeFiles\armin.dir\main.cpp.s

# Object files for target armin
armin_OBJECTS = \
"CMakeFiles/armin.dir/main.cpp.obj"

# External object files for target armin
armin_EXTERNAL_OBJECTS =

armin.exe: CMakeFiles/armin.dir/main.cpp.obj
armin.exe: CMakeFiles/armin.dir/build.make
armin.exe: CMakeFiles/armin.dir/linklibs.rsp
armin.exe: CMakeFiles/armin.dir/objects1.rsp
armin.exe: CMakeFiles/armin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bahar\Desktop\armin\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable armin.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\armin.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/armin.dir/build: armin.exe

.PHONY : CMakeFiles/armin.dir/build

CMakeFiles/armin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\armin.dir\cmake_clean.cmake
.PHONY : CMakeFiles/armin.dir/clean

CMakeFiles/armin.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bahar\Desktop\armin C:\Users\bahar\Desktop\armin C:\Users\bahar\Desktop\armin\cmake-build-debug C:\Users\bahar\Desktop\armin\cmake-build-debug C:\Users\bahar\Desktop\armin\cmake-build-debug\CMakeFiles\armin.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/armin.dir/depend
