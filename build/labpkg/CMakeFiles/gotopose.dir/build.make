# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/jan/wsfinal/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jan/wsfinal/build

# Include any dependencies generated for this target.
include labpkg/CMakeFiles/gotopose.dir/depend.make

# Include the progress variables for this target.
include labpkg/CMakeFiles/gotopose.dir/progress.make

# Include the compile flags for this target's objects.
include labpkg/CMakeFiles/gotopose.dir/flags.make

labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o: labpkg/CMakeFiles/gotopose.dir/flags.make
labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o: /home/jan/wsfinal/src/labpkg/src/gotopose.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jan/wsfinal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o"
	cd /home/jan/wsfinal/build/labpkg && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gotopose.dir/src/gotopose.cpp.o -c /home/jan/wsfinal/src/labpkg/src/gotopose.cpp

labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gotopose.dir/src/gotopose.cpp.i"
	cd /home/jan/wsfinal/build/labpkg && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jan/wsfinal/src/labpkg/src/gotopose.cpp > CMakeFiles/gotopose.dir/src/gotopose.cpp.i

labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gotopose.dir/src/gotopose.cpp.s"
	cd /home/jan/wsfinal/build/labpkg && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jan/wsfinal/src/labpkg/src/gotopose.cpp -o CMakeFiles/gotopose.dir/src/gotopose.cpp.s

labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o.requires:

.PHONY : labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o.requires

labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o.provides: labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o.requires
	$(MAKE) -f labpkg/CMakeFiles/gotopose.dir/build.make labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o.provides.build
.PHONY : labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o.provides

labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o.provides.build: labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o


# Object files for target gotopose
gotopose_OBJECTS = \
"CMakeFiles/gotopose.dir/src/gotopose.cpp.o"

# External object files for target gotopose
gotopose_EXTERNAL_OBJECTS =

/home/jan/wsfinal/devel/lib/labpkg/gotopose: labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o
/home/jan/wsfinal/devel/lib/labpkg/gotopose: labpkg/CMakeFiles/gotopose.dir/build.make
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/libtf2_ros.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/libactionlib.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/libmessage_filters.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/libroscpp.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/librosconsole.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/libtf2.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/librostime.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /opt/ros/kinetic/lib/libcpp_common.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/jan/wsfinal/devel/lib/labpkg/gotopose: labpkg/CMakeFiles/gotopose.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jan/wsfinal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/jan/wsfinal/devel/lib/labpkg/gotopose"
	cd /home/jan/wsfinal/build/labpkg && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gotopose.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
labpkg/CMakeFiles/gotopose.dir/build: /home/jan/wsfinal/devel/lib/labpkg/gotopose

.PHONY : labpkg/CMakeFiles/gotopose.dir/build

labpkg/CMakeFiles/gotopose.dir/requires: labpkg/CMakeFiles/gotopose.dir/src/gotopose.cpp.o.requires

.PHONY : labpkg/CMakeFiles/gotopose.dir/requires

labpkg/CMakeFiles/gotopose.dir/clean:
	cd /home/jan/wsfinal/build/labpkg && $(CMAKE_COMMAND) -P CMakeFiles/gotopose.dir/cmake_clean.cmake
.PHONY : labpkg/CMakeFiles/gotopose.dir/clean

labpkg/CMakeFiles/gotopose.dir/depend:
	cd /home/jan/wsfinal/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jan/wsfinal/src /home/jan/wsfinal/src/labpkg /home/jan/wsfinal/build /home/jan/wsfinal/build/labpkg /home/jan/wsfinal/build/labpkg/CMakeFiles/gotopose.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : labpkg/CMakeFiles/gotopose.dir/depend

