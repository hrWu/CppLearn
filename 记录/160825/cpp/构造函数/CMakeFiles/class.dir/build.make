# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.6.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.6.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数

# Include any dependencies generated for this target.
include CMakeFiles/class.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/class.dir/flags.make

CMakeFiles/class.dir/class.cpp.o: CMakeFiles/class.dir/flags.make
CMakeFiles/class.dir/class.cpp.o: class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wuhaorui/Desktop/记录/160825/cpp/构造函数/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/class.dir/class.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/class.dir/class.cpp.o -c /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数/class.cpp

CMakeFiles/class.dir/class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/class.dir/class.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数/class.cpp > CMakeFiles/class.dir/class.cpp.i

CMakeFiles/class.dir/class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/class.dir/class.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数/class.cpp -o CMakeFiles/class.dir/class.cpp.s

CMakeFiles/class.dir/class.cpp.o.requires:

.PHONY : CMakeFiles/class.dir/class.cpp.o.requires

CMakeFiles/class.dir/class.cpp.o.provides: CMakeFiles/class.dir/class.cpp.o.requires
	$(MAKE) -f CMakeFiles/class.dir/build.make CMakeFiles/class.dir/class.cpp.o.provides.build
.PHONY : CMakeFiles/class.dir/class.cpp.o.provides

CMakeFiles/class.dir/class.cpp.o.provides.build: CMakeFiles/class.dir/class.cpp.o


# Object files for target class
class_OBJECTS = \
"CMakeFiles/class.dir/class.cpp.o"

# External object files for target class
class_EXTERNAL_OBJECTS =

class: CMakeFiles/class.dir/class.cpp.o
class: CMakeFiles/class.dir/build.make
class: CMakeFiles/class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wuhaorui/Desktop/记录/160825/cpp/构造函数/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable class"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/class.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/class.dir/build: class

.PHONY : CMakeFiles/class.dir/build

CMakeFiles/class.dir/requires: CMakeFiles/class.dir/class.cpp.o.requires

.PHONY : CMakeFiles/class.dir/requires

CMakeFiles/class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/class.dir/cmake_clean.cmake
.PHONY : CMakeFiles/class.dir/clean

CMakeFiles/class.dir/depend:
	cd /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数 /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数 /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数 /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数 /Users/wuhaorui/Desktop/记录/160825/cpp/构造函数/CMakeFiles/class.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/class.dir/depend

