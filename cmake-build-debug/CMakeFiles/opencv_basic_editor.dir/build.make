# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "/Users/alitaigamatthias-adams/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4668.70/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/alitaigamatthias-adams/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4668.70/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alitaigamatthias-adams/Documents/opencv_basic_editor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alitaigamatthias-adams/Documents/opencv_basic_editor/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/opencv_basic_editor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/opencv_basic_editor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/opencv_basic_editor.dir/flags.make

CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o: CMakeFiles/opencv_basic_editor.dir/flags.make
CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o: ../face_recognition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alitaigamatthias-adams/Documents/opencv_basic_editor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o -c /Users/alitaigamatthias-adams/Documents/opencv_basic_editor/face_recognition.cpp

CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alitaigamatthias-adams/Documents/opencv_basic_editor/face_recognition.cpp > CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.i

CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alitaigamatthias-adams/Documents/opencv_basic_editor/face_recognition.cpp -o CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.s

CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o.requires:

.PHONY : CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o.requires

CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o.provides: CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o.requires
	$(MAKE) -f CMakeFiles/opencv_basic_editor.dir/build.make CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o.provides.build
.PHONY : CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o.provides

CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o.provides.build: CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o


# Object files for target opencv_basic_editor
opencv_basic_editor_OBJECTS = \
"CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o"

# External object files for target opencv_basic_editor
opencv_basic_editor_EXTERNAL_OBJECTS =

opencv_basic_editor: CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o
opencv_basic_editor: CMakeFiles/opencv_basic_editor.dir/build.make
opencv_basic_editor: /usr/local/lib/libopencv_stitching.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_superres.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_videostab.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_aruco.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_bgsegm.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_bioinspired.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_ccalib.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_dpm.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_face.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_fuzzy.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_img_hash.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_line_descriptor.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_optflow.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_reg.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_rgbd.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_saliency.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_stereo.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_structured_light.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_surface_matching.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_tracking.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_xfeatures2d.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_ximgproc.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_xobjdetect.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_xphoto.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_shape.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_photo.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_datasets.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_plot.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_text.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_dnn.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_ml.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_video.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_calib3d.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_features2d.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_highgui.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_videoio.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_phase_unwrapping.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_flann.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_imgcodecs.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_objdetect.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_imgproc.3.4.0.dylib
opencv_basic_editor: /usr/local/lib/libopencv_core.3.4.0.dylib
opencv_basic_editor: CMakeFiles/opencv_basic_editor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alitaigamatthias-adams/Documents/opencv_basic_editor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable opencv_basic_editor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_basic_editor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/opencv_basic_editor.dir/build: opencv_basic_editor

.PHONY : CMakeFiles/opencv_basic_editor.dir/build

CMakeFiles/opencv_basic_editor.dir/requires: CMakeFiles/opencv_basic_editor.dir/face_recognition.cpp.o.requires

.PHONY : CMakeFiles/opencv_basic_editor.dir/requires

CMakeFiles/opencv_basic_editor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/opencv_basic_editor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/opencv_basic_editor.dir/clean

CMakeFiles/opencv_basic_editor.dir/depend:
	cd /Users/alitaigamatthias-adams/Documents/opencv_basic_editor/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alitaigamatthias-adams/Documents/opencv_basic_editor /Users/alitaigamatthias-adams/Documents/opencv_basic_editor /Users/alitaigamatthias-adams/Documents/opencv_basic_editor/cmake-build-debug /Users/alitaigamatthias-adams/Documents/opencv_basic_editor/cmake-build-debug /Users/alitaigamatthias-adams/Documents/opencv_basic_editor/cmake-build-debug/CMakeFiles/opencv_basic_editor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/opencv_basic_editor.dir/depend

