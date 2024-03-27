cmake_minimum_required(VERSION 3.27)

project(Hash)
set(CXX_STANDARD 20)

# Main directories
set(GTEST_DIR "${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR}")
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(Algo_DIR "${CMAKE_SOURCE_DIR}/src/Algo")

# Algorithmic directories
set(MD5_DIR "${Algo_DIR}/md5")
set(SHA3_DIR "${Algo_DIR}/sha3")
set(SHA1_DIR "${Algo_DIR}/sha1")
set(SHA256_DIR "${Algo_DIR}/sha256")
set(CRC32_DIR "${Algo_DIR}/crc32")
set(KECCAK_DIR "${Algo_DIR}/keccak")



# 'lib' is the folder with Google Test sources
add_subdirectory(googletest)

# Adding header files from the following directories.
include_directories(
    ${GTEST_DIR}
    ${SOURCE_DIR}
    ${Algo_DIR}

    ${MD5_DIR}
    ${SHA3_DIR}
    ${SHA1_DIR}
    ${SHA256_DIR}
    ${CRC32_DIR}
    ${KECCAK_DIR}
)


add_executable (Hash
${SOURCE_DIR}/main.cpp
${SHA256_DIR}/sha256.cpp
${SHA1_DIR}/sha1.cpp
${SHA3_DIR}/sha3.cpp
${MD5_DIR}/md5.cpp
${CRC32_DIR}/crc32.cpp
${KECCAK_DIR}/keccak.cpp
)
target_link_libraries(Hash gtest gtest_main)