# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/csiga/HDD/Proj/somethingtodo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csiga/HDD/Proj/somethingtodo/build

# Include any dependencies generated for this target.
include CMakeFiles/somethingtodo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/somethingtodo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/somethingtodo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/somethingtodo.dir/flags.make

CMakeFiles/somethingtodo.dir/WindowManager.cpp.o: CMakeFiles/somethingtodo.dir/flags.make
CMakeFiles/somethingtodo.dir/WindowManager.cpp.o: ../WindowManager.cpp
CMakeFiles/somethingtodo.dir/WindowManager.cpp.o: CMakeFiles/somethingtodo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csiga/HDD/Proj/somethingtodo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/somethingtodo.dir/WindowManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/somethingtodo.dir/WindowManager.cpp.o -MF CMakeFiles/somethingtodo.dir/WindowManager.cpp.o.d -o CMakeFiles/somethingtodo.dir/WindowManager.cpp.o -c /home/csiga/HDD/Proj/somethingtodo/WindowManager.cpp

CMakeFiles/somethingtodo.dir/WindowManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/somethingtodo.dir/WindowManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csiga/HDD/Proj/somethingtodo/WindowManager.cpp > CMakeFiles/somethingtodo.dir/WindowManager.cpp.i

CMakeFiles/somethingtodo.dir/WindowManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/somethingtodo.dir/WindowManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csiga/HDD/Proj/somethingtodo/WindowManager.cpp -o CMakeFiles/somethingtodo.dir/WindowManager.cpp.s

CMakeFiles/somethingtodo.dir/main.cpp.o: CMakeFiles/somethingtodo.dir/flags.make
CMakeFiles/somethingtodo.dir/main.cpp.o: ../main.cpp
CMakeFiles/somethingtodo.dir/main.cpp.o: CMakeFiles/somethingtodo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csiga/HDD/Proj/somethingtodo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/somethingtodo.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/somethingtodo.dir/main.cpp.o -MF CMakeFiles/somethingtodo.dir/main.cpp.o.d -o CMakeFiles/somethingtodo.dir/main.cpp.o -c /home/csiga/HDD/Proj/somethingtodo/main.cpp

CMakeFiles/somethingtodo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/somethingtodo.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csiga/HDD/Proj/somethingtodo/main.cpp > CMakeFiles/somethingtodo.dir/main.cpp.i

CMakeFiles/somethingtodo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/somethingtodo.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csiga/HDD/Proj/somethingtodo/main.cpp -o CMakeFiles/somethingtodo.dir/main.cpp.s

# Object files for target somethingtodo
somethingtodo_OBJECTS = \
"CMakeFiles/somethingtodo.dir/WindowManager.cpp.o" \
"CMakeFiles/somethingtodo.dir/main.cpp.o"

# External object files for target somethingtodo
somethingtodo_EXTERNAL_OBJECTS =

somethingtodo: CMakeFiles/somethingtodo.dir/WindowManager.cpp.o
somethingtodo: CMakeFiles/somethingtodo.dir/main.cpp.o
somethingtodo: CMakeFiles/somethingtodo.dir/build.make
somethingtodo: CMakeFiles/somethingtodo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csiga/HDD/Proj/somethingtodo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable somethingtodo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/somethingtodo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/somethingtodo.dir/build: somethingtodo
.PHONY : CMakeFiles/somethingtodo.dir/build

CMakeFiles/somethingtodo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/somethingtodo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/somethingtodo.dir/clean

CMakeFiles/somethingtodo.dir/depend:
	cd /home/csiga/HDD/Proj/somethingtodo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csiga/HDD/Proj/somethingtodo /home/csiga/HDD/Proj/somethingtodo /home/csiga/HDD/Proj/somethingtodo/build /home/csiga/HDD/Proj/somethingtodo/build /home/csiga/HDD/Proj/somethingtodo/build/CMakeFiles/somethingtodo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/somethingtodo.dir/depend

