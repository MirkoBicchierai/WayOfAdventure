# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mirko\CLionProjects\WayOfAdventure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug

# Include any dependencies generated for this target.
include googleTest/CMakeFiles/GoogleTests.dir/depend.make

# Include the progress variables for this target.
include googleTest/CMakeFiles/GoogleTests.dir/progress.make

# Include the compile flags for this target's objects.
include googleTest/CMakeFiles/GoogleTests.dir/flags.make

googleTest/CMakeFiles/GoogleTests.dir/runAllTests.cpp.obj: googleTest/CMakeFiles/GoogleTests.dir/flags.make
googleTest/CMakeFiles/GoogleTests.dir/runAllTests.cpp.obj: googleTest/CMakeFiles/GoogleTests.dir/includes_CXX.rsp
googleTest/CMakeFiles/GoogleTests.dir/runAllTests.cpp.obj: ../googleTest/runAllTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object googleTest/CMakeFiles/GoogleTests.dir/runAllTests.cpp.obj"
	cd /d C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GoogleTests.dir\runAllTests.cpp.obj -c C:\Users\mirko\CLionProjects\WayOfAdventure\googleTest\runAllTests.cpp

googleTest/CMakeFiles/GoogleTests.dir/runAllTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GoogleTests.dir/runAllTests.cpp.i"
	cd /d C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mirko\CLionProjects\WayOfAdventure\googleTest\runAllTests.cpp > CMakeFiles\GoogleTests.dir\runAllTests.cpp.i

googleTest/CMakeFiles/GoogleTests.dir/runAllTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GoogleTests.dir/runAllTests.cpp.s"
	cd /d C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mirko\CLionProjects\WayOfAdventure\googleTest\runAllTests.cpp -o CMakeFiles\GoogleTests.dir\runAllTests.cpp.s

googleTest/CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.obj: googleTest/CMakeFiles/GoogleTests.dir/flags.make
googleTest/CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.obj: googleTest/CMakeFiles/GoogleTests.dir/includes_CXX.rsp
googleTest/CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.obj: ../googleTest/GameCharacterTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object googleTest/CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.obj"
	cd /d C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\GoogleTests.dir\GameCharacterTest.cpp.obj -c C:\Users\mirko\CLionProjects\WayOfAdventure\googleTest\GameCharacterTest.cpp

googleTest/CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.i"
	cd /d C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mirko\CLionProjects\WayOfAdventure\googleTest\GameCharacterTest.cpp > CMakeFiles\GoogleTests.dir\GameCharacterTest.cpp.i

googleTest/CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.s"
	cd /d C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest && C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mirko\CLionProjects\WayOfAdventure\googleTest\GameCharacterTest.cpp -o CMakeFiles\GoogleTests.dir\GameCharacterTest.cpp.s

# Object files for target GoogleTests
GoogleTests_OBJECTS = \
"CMakeFiles/GoogleTests.dir/runAllTests.cpp.obj" \
"CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.obj"

# External object files for target GoogleTests
GoogleTests_EXTERNAL_OBJECTS =

googleTest/GoogleTests.exe: googleTest/CMakeFiles/GoogleTests.dir/runAllTests.cpp.obj
googleTest/GoogleTests.exe: googleTest/CMakeFiles/GoogleTests.dir/GameCharacterTest.cpp.obj
googleTest/GoogleTests.exe: googleTest/CMakeFiles/GoogleTests.dir/build.make
googleTest/GoogleTests.exe: googleTest/lib/googletest/libgtestd.a
googleTest/GoogleTests.exe: googleTest/lib/googletest/libgtest_maind.a
googleTest/GoogleTests.exe: libcore.a
googleTest/GoogleTests.exe: ../lib/SFML/lib/libsfml-graphics-d.a
googleTest/GoogleTests.exe: ../lib/SFML/lib/libsfml-window-d.a
googleTest/GoogleTests.exe: ../lib/SFML/lib/libsfml-audio-d.a
googleTest/GoogleTests.exe: libcore.a
googleTest/GoogleTests.exe: googleTest/lib/googletest/libgtestd.a
googleTest/GoogleTests.exe: ../lib/SFML/lib/libsfml-system-d.a
googleTest/GoogleTests.exe: googleTest/CMakeFiles/GoogleTests.dir/linklibs.rsp
googleTest/GoogleTests.exe: googleTest/CMakeFiles/GoogleTests.dir/objects1.rsp
googleTest/GoogleTests.exe: googleTest/CMakeFiles/GoogleTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable GoogleTests.exe"
	cd /d C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GoogleTests.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googleTest/CMakeFiles/GoogleTests.dir/build: googleTest/GoogleTests.exe

.PHONY : googleTest/CMakeFiles/GoogleTests.dir/build

googleTest/CMakeFiles/GoogleTests.dir/clean:
	cd /d C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest && $(CMAKE_COMMAND) -P CMakeFiles\GoogleTests.dir\cmake_clean.cmake
.PHONY : googleTest/CMakeFiles/GoogleTests.dir/clean

googleTest/CMakeFiles/GoogleTests.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mirko\CLionProjects\WayOfAdventure C:\Users\mirko\CLionProjects\WayOfAdventure\googleTest C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest C:\Users\mirko\CLionProjects\WayOfAdventure\cmake-build-debug\googleTest\CMakeFiles\GoogleTests.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : googleTest/CMakeFiles/GoogleTests.dir/depend

