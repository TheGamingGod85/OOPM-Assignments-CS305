# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Software\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = D:\Software\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Projects\Cpp\College\oops\Assignment_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Projects\Cpp\College\oops\Assignment_1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Assignment_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Assignment_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment_1.dir/flags.make

CMakeFiles/Assignment_1.dir/main.cpp.obj: CMakeFiles/Assignment_1.dir/flags.make
CMakeFiles/Assignment_1.dir/main.cpp.obj: D:/Projects/Cpp/College/oops/Assignment_1/main.cpp
CMakeFiles/Assignment_1.dir/main.cpp.obj: CMakeFiles/Assignment_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Projects\Cpp\College\oops\Assignment_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment_1.dir/main.cpp.obj"
	D:\Software\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Assignment_1.dir/main.cpp.obj -MF CMakeFiles\Assignment_1.dir\main.cpp.obj.d -o CMakeFiles\Assignment_1.dir\main.cpp.obj -c D:\Projects\Cpp\College\oops\Assignment_1\main.cpp

CMakeFiles/Assignment_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Assignment_1.dir/main.cpp.i"
	D:\Software\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\Cpp\College\oops\Assignment_1\main.cpp > CMakeFiles\Assignment_1.dir\main.cpp.i

CMakeFiles/Assignment_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Assignment_1.dir/main.cpp.s"
	D:\Software\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Projects\Cpp\College\oops\Assignment_1\main.cpp -o CMakeFiles\Assignment_1.dir\main.cpp.s

# Object files for target Assignment_1
Assignment_1_OBJECTS = \
"CMakeFiles/Assignment_1.dir/main.cpp.obj"

# External object files for target Assignment_1
Assignment_1_EXTERNAL_OBJECTS =

Assignment_1.exe: CMakeFiles/Assignment_1.dir/main.cpp.obj
Assignment_1.exe: CMakeFiles/Assignment_1.dir/build.make
Assignment_1.exe: CMakeFiles/Assignment_1.dir/linkLibs.rsp
Assignment_1.exe: CMakeFiles/Assignment_1.dir/objects1.rsp
Assignment_1.exe: CMakeFiles/Assignment_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Projects\Cpp\College\oops\Assignment_1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Assignment_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Assignment_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment_1.dir/build: Assignment_1.exe
.PHONY : CMakeFiles/Assignment_1.dir/build

CMakeFiles/Assignment_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assignment_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Assignment_1.dir/clean

CMakeFiles/Assignment_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Projects\Cpp\College\oops\Assignment_1 D:\Projects\Cpp\College\oops\Assignment_1 D:\Projects\Cpp\College\oops\Assignment_1\cmake-build-debug D:\Projects\Cpp\College\oops\Assignment_1\cmake-build-debug D:\Projects\Cpp\College\oops\Assignment_1\cmake-build-debug\CMakeFiles\Assignment_1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Assignment_1.dir/depend
