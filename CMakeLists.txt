cmake_minimum_required(VERSION 3.27)

# 'Google_test' is the subproject name
project(Hash)

# 'lib' is the folder with Google Test sources
add_subdirectory(./lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp test2.cpp' are source files with tests
add_executable(Hash ./src/main.cpp)
target_link_libraries(Hash gtest gtest_main)