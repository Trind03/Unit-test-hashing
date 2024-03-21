cmake_minimum_required(VERSION 3.27)

# 'Google_test' is the subproject name
project(Hash)
set(CXX_STANDARD 20)

# 'lib' is the folder with Google Test sources
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/Algo)

# 'Google_Tests_run' is the target name
add_executable (Hash
./src/main.cpp
./src/Algo/sha256.cpp
./src/Algo/sha1.cpp
./src/Algo/sha3.cpp
./src/Algo/md5.cpp
)
target_link_libraries(Hash gtest gtest_main)