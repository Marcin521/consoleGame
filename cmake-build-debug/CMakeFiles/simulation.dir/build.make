# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Programowanie\simulation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programowanie\simulation\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/simulation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simulation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simulation.dir/flags.make

CMakeFiles/simulation.dir/main.cpp.obj: CMakeFiles/simulation.dir/flags.make
CMakeFiles/simulation.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programowanie\simulation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simulation.dir/main.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-7.1.0-posix-dwarf-rt_v5-rev2\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\simulation.dir\main.cpp.obj -c C:\Programowanie\simulation\main.cpp

CMakeFiles/simulation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simulation.dir/main.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-7.1.0-posix-dwarf-rt_v5-rev2\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programowanie\simulation\main.cpp > CMakeFiles\simulation.dir\main.cpp.i

CMakeFiles/simulation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simulation.dir/main.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-7.1.0-posix-dwarf-rt_v5-rev2\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programowanie\simulation\main.cpp -o CMakeFiles\simulation.dir\main.cpp.s

CMakeFiles/simulation.dir/Entity.cpp.obj: CMakeFiles/simulation.dir/flags.make
CMakeFiles/simulation.dir/Entity.cpp.obj: ../Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programowanie\simulation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simulation.dir/Entity.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-7.1.0-posix-dwarf-rt_v5-rev2\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\simulation.dir\Entity.cpp.obj -c C:\Programowanie\simulation\Entity.cpp

CMakeFiles/simulation.dir/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simulation.dir/Entity.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-7.1.0-posix-dwarf-rt_v5-rev2\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programowanie\simulation\Entity.cpp > CMakeFiles\simulation.dir\Entity.cpp.i

CMakeFiles/simulation.dir/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simulation.dir/Entity.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-7.1.0-posix-dwarf-rt_v5-rev2\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programowanie\simulation\Entity.cpp -o CMakeFiles\simulation.dir\Entity.cpp.s

# Object files for target simulation
simulation_OBJECTS = \
"CMakeFiles/simulation.dir/main.cpp.obj" \
"CMakeFiles/simulation.dir/Entity.cpp.obj"

# External object files for target simulation
simulation_EXTERNAL_OBJECTS =

simulation.exe: CMakeFiles/simulation.dir/main.cpp.obj
simulation.exe: CMakeFiles/simulation.dir/Entity.cpp.obj
simulation.exe: CMakeFiles/simulation.dir/build.make
simulation.exe: CMakeFiles/simulation.dir/linklibs.rsp
simulation.exe: CMakeFiles/simulation.dir/objects1.rsp
simulation.exe: CMakeFiles/simulation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programowanie\simulation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable simulation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\simulation.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simulation.dir/build: simulation.exe

.PHONY : CMakeFiles/simulation.dir/build

CMakeFiles/simulation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\simulation.dir\cmake_clean.cmake
.PHONY : CMakeFiles/simulation.dir/clean

CMakeFiles/simulation.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programowanie\simulation C:\Programowanie\simulation C:\Programowanie\simulation\cmake-build-debug C:\Programowanie\simulation\cmake-build-debug C:\Programowanie\simulation\cmake-build-debug\CMakeFiles\simulation.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simulation.dir/depend

