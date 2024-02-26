cmake_minimum_required(VERSION 3.27)

# 'Google_test' is the subproject name
project(Hash)

# 'lib' is the folder with Google Test sources
add_subdirectory(./lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
add_executable (Hash ./src/main.cpp ../lib/hash/sha256.cpp ../lib/hash/sha1.cpp ../lib/hash/sha3.cpp ../lib/hash/md5.cpp)
target_link_libraries(Hash gtest gtest_main)