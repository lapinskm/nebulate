cmake_minimum_required (VERSION 3.5)
project (nebulate)

find_package (ImageMagick COMPONENTS Magick++ REQUIRED)

file (GLOB SOURCE_FILES *.cpp)
include_directories (${ImageMagick_INCLUDE_DIRS})

#executable
set(EXEC_FILE nebulate)
add_executable (${EXEC_FILE} ${SOURCE_FILES})

target_link_libraries (${EXEC_FILE} ${ImageMagick_LIBRARIES})
