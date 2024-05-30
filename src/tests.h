#pragma once
#include <gtest/gtest.h>
#include <iostream>
#include "sha256.h"
#include "md5.h"
#include "sha1.h"
#include "sha3.h"
#include "crc32.h"
#include "keccak.h"

struct hashed
{
    const char* _sha256 = "a591a6d40bf420404a011733cfb7b190d62c65bf0bcda32b57b277d9ad9f146e";
    const char* _sha1 = "0a4d55a8d778e5022fab701977c5d840bbc486d0";
    const char* _sha3 = "e167f68d6563d75bb25f3aa49c29ef612d41352dc00606de7cbd630bb2665f51";
    const char* _md5 = "b10a8db164e0754105b7a99be72e3fe5";
    const char* _keccak = "592fa743889fc7f92ac2a37bb1f5ba1daf2a5c84741ca0e0061d243a2e6707ba";
    const char* _crc32 = "4a17b156";

};

TEST(Unit_sha256,sha256)
{
    std::unique_ptr<SHA256>sha256 = std::make_unique<SHA256>();
    EXPECT_EQ(_sha256,(*sha256)("Hello World"));
}

TEST(Unit_sha1,sha1)
{
    std::unique_ptr<SHA1>sha1 = std::make_unique<SHA1>();
    EXPECT_EQ(_sha1,(*sha1)("Hello World"));
}

TEST(Unit_sha3,sha3)
{
    std::unique_ptr<SHA3>sha3 = std::make_unique<SHA3>();
    EXPECT_EQ(_sha3,(*sha3)("Hello World"));
}

TEST(Unit_md5,md5)
{
    std::unique_ptr<MD5>md5 = std::make_unique<MD5>();
    EXPECT_EQ(_md5,(*md5)("Hello World"));
}

TEST(Unit_crc32,crc32)
{
    std::unique_ptr<CRC32>crc32 = std::make_unique<CRC32>();
    EXPECT_EQ(_crc32,(*crc32)("Hello World"));
}

TEST(Unit_keccak,keccak)
{
    std::unique_ptr<Keccak>keccak = std::make_unique<Keccak>();
    EXPECT_EQ(_keccak,(*keccak)("Hello World"));
}