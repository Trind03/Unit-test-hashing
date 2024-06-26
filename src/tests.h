#pragma once
#include <gtest/gtest.h>
#include <iostream>
#include "sha256.h"
#include "md5.h"
#include "sha1.h"
#include "sha3.h"
#include "crc32.h"
#include "keccak.h"

TEST(Unit_sha256,sha256)
{
    std::unique_ptr<SHA256>(_sha256) = std::make_unique<SHA256>();
    const char* sha256 = "a591a6d40bf420404a011733cfb7b190d62c65bf0bcda32b57b277d9ad9f146e";
    EXPECT_EQ(sha256,(*_sha256)("Hello World"));
}

TEST(Unit_sha1,sha1)
{
    std::unique_ptr<SHA1>(_sha1) = std::make_unique<SHA1>();
    const char* sha1 = "0a4d55a8d778e5022fab701977c5d840bbc486d0";
    EXPECT_EQ(sha1,(*_sha1)("Hello World"));
}

TEST(Unit_sha3,sha3)
{
    std::unique_ptr<SHA3>(_sha3) = std::make_unique<SHA3>();
    const char* sha3 = "e167f68d6563d75bb25f3aa49c29ef612d41352dc00606de7cbd630bb2665f51";
    EXPECT_EQ(sha3,(*_sha3)("Hello World"));
}

TEST(Unit_md5,md5)
{
    std::unique_ptr<MD5>(_md5) = std::make_unique<MD5>();
    const char* md5 = "b10a8db164e0754105b7a99be72e3fe5";
    EXPECT_EQ(md5,(*_md5)("Hello World"));
}

TEST(Unit_crc32,crc32)
{
    std::unique_ptr<CRC32>(_crc32) = std::make_unique<CRC32>();
    const char* crc32 = "4a17b156";
    EXPECT_EQ(crc32,(*_crc32)("Hello World"));
}

TEST(Unit_keccak,keccak)
{
    std::unique_ptr<Keccak>(_keccak) = std::make_unique<Keccak>();
    const char* keccak = "592fa743889fc7f92ac2a37bb1f5ba1daf2a5c84741ca0e0061d243a2e6707ba";
    EXPECT_EQ(keccak,(*_keccak)("Hello World"));
}