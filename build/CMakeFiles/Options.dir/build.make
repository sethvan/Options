# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/sethvan/Desktop/Dad/C/Options_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sethvan/Desktop/Dad/C/Options_Project/build

# Include any dependencies generated for this target.
include CMakeFiles/Options.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Options.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Options.dir/flags.make

CMakeFiles/Options.dir/main.c.o: CMakeFiles/Options.dir/flags.make
CMakeFiles/Options.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sethvan/Desktop/Dad/C/Options_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Options.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Options.dir/main.c.o   -c /home/sethvan/Desktop/Dad/C/Options_Project/main.c

CMakeFiles/Options.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Options.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sethvan/Desktop/Dad/C/Options_Project/main.c > CMakeFiles/Options.dir/main.c.i

CMakeFiles/Options.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Options.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sethvan/Desktop/Dad/C/Options_Project/main.c -o CMakeFiles/Options.dir/main.c.s

CMakeFiles/Options.dir/OperationsDV1.c.o: CMakeFiles/Options.dir/flags.make
CMakeFiles/Options.dir/OperationsDV1.c.o: ../OperationsDV1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sethvan/Desktop/Dad/C/Options_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Options.dir/OperationsDV1.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Options.dir/OperationsDV1.c.o   -c /home/sethvan/Desktop/Dad/C/Options_Project/OperationsDV1.c

CMakeFiles/Options.dir/OperationsDV1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Options.dir/OperationsDV1.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/sethvan/Desktop/Dad/C/Options_Project/OperationsDV1.c > CMakeFiles/Options.dir/OperationsDV1.c.i

CMakeFiles/Options.dir/OperationsDV1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Options.dir/OperationsDV1.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/sethvan/Desktop/Dad/C/Options_Project/OperationsDV1.c -o CMakeFiles/Options.dir/OperationsDV1.c.s

# Object files for target Options
Options_OBJECTS = \
"CMakeFiles/Options.dir/main.c.o" \
"CMakeFiles/Options.dir/OperationsDV1.c.o"

# External object files for target Options
Options_EXTERNAL_OBJECTS =

Options: CMakeFiles/Options.dir/main.c.o
Options: CMakeFiles/Options.dir/OperationsDV1.c.o
Options: CMakeFiles/Options.dir/build.make
Options: CMakeFiles/Options.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sethvan/Desktop/Dad/C/Options_Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Options"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Options.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Options.dir/build: Options

.PHONY : CMakeFiles/Options.dir/build

CMakeFiles/Options.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Options.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Options.dir/clean

CMakeFiles/Options.dir/depend:
	cd /home/sethvan/Desktop/Dad/C/Options_Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sethvan/Desktop/Dad/C/Options_Project /home/sethvan/Desktop/Dad/C/Options_Project /home/sethvan/Desktop/Dad/C/Options_Project/build /home/sethvan/Desktop/Dad/C/Options_Project/build /home/sethvan/Desktop/Dad/C/Options_Project/build/CMakeFiles/Options.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Options.dir/depend
