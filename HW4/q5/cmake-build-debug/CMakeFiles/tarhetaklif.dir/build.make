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
CMAKE_SOURCE_DIR = C:\Users\bahar\Desktop\tarhetaklif

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bahar\Desktop\tarhetaklif\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tarhetaklif.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tarhetaklif.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tarhetaklif.dir/flags.make

CMakeFiles/tarhetaklif.dir/main.cpp.obj: CMakeFiles/tarhetaklif.dir/flags.make
CMakeFiles/tarhetaklif.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bahar\Desktop\tarhetaklif\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tarhetaklif.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\tarhetaklif.dir\main.cpp.obj -c C:\Users\bahar\Desktop\tarhetaklif\main.cpp

CMakeFiles/tarhetaklif.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tarhetaklif.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bahar\Desktop\tarhetaklif\main.cpp > CMakeFiles\tarhetaklif.dir\main.cpp.i

CMakeFiles/tarhetaklif.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tarhetaklif.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\bahar\Desktop\tarhetaklif\main.cpp -o CMakeFiles\tarhetaklif.dir\main.cpp.s

# Object files for target tarhetaklif
tarhetaklif_OBJECTS = \
"CMakeFiles/tarhetaklif.dir/main.cpp.obj"

# External object files for target tarhetaklif
tarhetaklif_EXTERNAL_OBJECTS =

tarhetaklif.exe: CMakeFiles/tarhetaklif.dir/main.cpp.obj
tarhetaklif.exe: CMakeFiles/tarhetaklif.dir/build.make
tarhetaklif.exe: CMakeFiles/tarhetaklif.dir/linklibs.rsp
tarhetaklif.exe: CMakeFiles/tarhetaklif.dir/objects1.rsp
tarhetaklif.exe: CMakeFiles/tarhetaklif.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bahar\Desktop\tarhetaklif\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tarhetaklif.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tarhetaklif.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tarhetaklif.dir/build: tarhetaklif.exe

.PHONY : CMakeFiles/tarhetaklif.dir/build

CMakeFiles/tarhetaklif.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tarhetaklif.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tarhetaklif.dir/clean

CMakeFiles/tarhetaklif.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bahar\Desktop\tarhetaklif C:\Users\bahar\Desktop\tarhetaklif C:\Users\bahar\Desktop\tarhetaklif\cmake-build-debug C:\Users\bahar\Desktop\tarhetaklif\cmake-build-debug C:\Users\bahar\Desktop\tarhetaklif\cmake-build-debug\CMakeFiles\tarhetaklif.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tarhetaklif.dir/depend

