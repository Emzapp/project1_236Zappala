# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/emmazappala/Downloads/Project1_236Zappala

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project1_236Zappala.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Project1_236Zappala.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project1_236Zappala.dir/flags.make

CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.o: CMakeFiles/Project1_236Zappala.dir/flags.make
CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.o: ../ColonAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.o -c /Users/emmazappala/Downloads/Project1_236Zappala/ColonAutomaton.cpp

CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emmazappala/Downloads/Project1_236Zappala/ColonAutomaton.cpp > CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.i

CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emmazappala/Downloads/Project1_236Zappala/ColonAutomaton.cpp -o CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.s

CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.o: CMakeFiles/Project1_236Zappala.dir/flags.make
CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.o: ../ColonDashAutomaton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.o -c /Users/emmazappala/Downloads/Project1_236Zappala/ColonDashAutomaton.cpp

CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emmazappala/Downloads/Project1_236Zappala/ColonDashAutomaton.cpp > CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.i

CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emmazappala/Downloads/Project1_236Zappala/ColonDashAutomaton.cpp -o CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.s

CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.o: CMakeFiles/Project1_236Zappala.dir/flags.make
CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.o: ../Lexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.o -c /Users/emmazappala/Downloads/Project1_236Zappala/Lexer.cpp

CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emmazappala/Downloads/Project1_236Zappala/Lexer.cpp > CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.i

CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emmazappala/Downloads/Project1_236Zappala/Lexer.cpp -o CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.s

CMakeFiles/Project1_236Zappala.dir/main.cpp.o: CMakeFiles/Project1_236Zappala.dir/flags.make
CMakeFiles/Project1_236Zappala.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project1_236Zappala.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1_236Zappala.dir/main.cpp.o -c /Users/emmazappala/Downloads/Project1_236Zappala/main.cpp

CMakeFiles/Project1_236Zappala.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_236Zappala.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emmazappala/Downloads/Project1_236Zappala/main.cpp > CMakeFiles/Project1_236Zappala.dir/main.cpp.i

CMakeFiles/Project1_236Zappala.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_236Zappala.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emmazappala/Downloads/Project1_236Zappala/main.cpp -o CMakeFiles/Project1_236Zappala.dir/main.cpp.s

CMakeFiles/Project1_236Zappala.dir/Token.cpp.o: CMakeFiles/Project1_236Zappala.dir/flags.make
CMakeFiles/Project1_236Zappala.dir/Token.cpp.o: ../Token.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Project1_236Zappala.dir/Token.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project1_236Zappala.dir/Token.cpp.o -c /Users/emmazappala/Downloads/Project1_236Zappala/Token.cpp

CMakeFiles/Project1_236Zappala.dir/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1_236Zappala.dir/Token.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emmazappala/Downloads/Project1_236Zappala/Token.cpp > CMakeFiles/Project1_236Zappala.dir/Token.cpp.i

CMakeFiles/Project1_236Zappala.dir/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1_236Zappala.dir/Token.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emmazappala/Downloads/Project1_236Zappala/Token.cpp -o CMakeFiles/Project1_236Zappala.dir/Token.cpp.s

# Object files for target Project1_236Zappala
Project1_236Zappala_OBJECTS = \
"CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.o" \
"CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.o" \
"CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.o" \
"CMakeFiles/Project1_236Zappala.dir/main.cpp.o" \
"CMakeFiles/Project1_236Zappala.dir/Token.cpp.o"

# External object files for target Project1_236Zappala
Project1_236Zappala_EXTERNAL_OBJECTS =

Project1_236Zappala: CMakeFiles/Project1_236Zappala.dir/ColonAutomaton.cpp.o
Project1_236Zappala: CMakeFiles/Project1_236Zappala.dir/ColonDashAutomaton.cpp.o
Project1_236Zappala: CMakeFiles/Project1_236Zappala.dir/Lexer.cpp.o
Project1_236Zappala: CMakeFiles/Project1_236Zappala.dir/main.cpp.o
Project1_236Zappala: CMakeFiles/Project1_236Zappala.dir/Token.cpp.o
Project1_236Zappala: CMakeFiles/Project1_236Zappala.dir/build.make
Project1_236Zappala: CMakeFiles/Project1_236Zappala.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Project1_236Zappala"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project1_236Zappala.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project1_236Zappala.dir/build: Project1_236Zappala
.PHONY : CMakeFiles/Project1_236Zappala.dir/build

CMakeFiles/Project1_236Zappala.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project1_236Zappala.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project1_236Zappala.dir/clean

CMakeFiles/Project1_236Zappala.dir/depend:
	cd /Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/emmazappala/Downloads/Project1_236Zappala /Users/emmazappala/Downloads/Project1_236Zappala /Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug /Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug /Users/emmazappala/Downloads/Project1_236Zappala/cmake-build-debug/CMakeFiles/Project1_236Zappala.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project1_236Zappala.dir/depend

