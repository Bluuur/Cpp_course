# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\program\C++Learning\HZAU\MOOC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\program\C++Learning\HZAU\MOOC\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mooc_chap4_02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mooc_chap4_02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mooc_chap4_02.dir/flags.make

CMakeFiles/mooc_chap4_02.dir/MoocChap4_02.cpp.obj: CMakeFiles/mooc_chap4_02.dir/flags.make
CMakeFiles/mooc_chap4_02.dir/MoocChap4_02.cpp.obj: ../MoocChap4_02.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\program\C++Learning\HZAU\MOOC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mooc_chap4_02.dir/MoocChap4_02.cpp.obj"
	"D:\Program Files\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mooc_chap4_02.dir\MoocChap4_02.cpp.obj -c D:\program\C++Learning\HZAU\MOOC\MoocChap4_02.cpp

CMakeFiles/mooc_chap4_02.dir/MoocChap4_02.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mooc_chap4_02.dir/MoocChap4_02.cpp.i"
	"D:\Program Files\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\program\C++Learning\HZAU\MOOC\MoocChap4_02.cpp > CMakeFiles\mooc_chap4_02.dir\MoocChap4_02.cpp.i

CMakeFiles/mooc_chap4_02.dir/MoocChap4_02.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mooc_chap4_02.dir/MoocChap4_02.cpp.s"
	"D:\Program Files\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\program\C++Learning\HZAU\MOOC\MoocChap4_02.cpp -o CMakeFiles\mooc_chap4_02.dir\MoocChap4_02.cpp.s

# Object files for target mooc_chap4_02
mooc_chap4_02_OBJECTS = \
"CMakeFiles/mooc_chap4_02.dir/MoocChap4_02.cpp.obj"

# External object files for target mooc_chap4_02
mooc_chap4_02_EXTERNAL_OBJECTS =

mooc_chap4_02.exe: CMakeFiles/mooc_chap4_02.dir/MoocChap4_02.cpp.obj
mooc_chap4_02.exe: CMakeFiles/mooc_chap4_02.dir/build.make
mooc_chap4_02.exe: CMakeFiles/mooc_chap4_02.dir/linklibs.rsp
mooc_chap4_02.exe: CMakeFiles/mooc_chap4_02.dir/objects1.rsp
mooc_chap4_02.exe: CMakeFiles/mooc_chap4_02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\program\C++Learning\HZAU\MOOC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mooc_chap4_02.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mooc_chap4_02.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mooc_chap4_02.dir/build: mooc_chap4_02.exe

.PHONY : CMakeFiles/mooc_chap4_02.dir/build

CMakeFiles/mooc_chap4_02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mooc_chap4_02.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mooc_chap4_02.dir/clean

CMakeFiles/mooc_chap4_02.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\program\C++Learning\HZAU\MOOC D:\program\C++Learning\HZAU\MOOC D:\program\C++Learning\HZAU\MOOC\cmake-build-debug D:\program\C++Learning\HZAU\MOOC\cmake-build-debug D:\program\C++Learning\HZAU\MOOC\cmake-build-debug\CMakeFiles\mooc_chap4_02.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mooc_chap4_02.dir/depend

