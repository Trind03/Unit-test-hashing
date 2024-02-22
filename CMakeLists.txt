cmake_minimum_required(VERSION 3.27)
# 'Google_test' is the subproject name
project(test_run)

# 'lib' is the folder with Google Test sources
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp test2.cpp' are source files with tests
add_executable(test_run main.cpp test.cpp)
target_link_libraries(test_run gtest gtest_main)