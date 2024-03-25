#pragma once
#include <gtest/gtest.h>
#include "sha256.h"
#include "md5.h"
#include "sha1.h"
#include "sha3.h"
#include <memory>
TEST(Unit_sha256,sha256)
{
    std::unique_ptr<SHA256>(sha256) = std::make_unique<SHA256>();
    std::string _sha256 = "a591a6d40bf420404a011733cfb7b190d62c65bf0bcda32b57b277d9ad9f146e";
    EXPECT_EQ(_sha256,(*sha256)("Hello World"));
}

TEST(Unit_sha1,sha1)
{
    std::unique_ptr<SHA1>(sha1) = std::make_unique<SHA1>();
    std::string _sha1 = "0a4d55a8d778e5022fab701977c5d840bbc486d0";
    EXPECT_EQ(_sha1,(*sha1)("Hello World"));
}

TEST(Unit_sha3,sha3)
{
    std::unique_ptr<SHA3>(sha3) = std::make_unique<SHA3>();
    std::string _sha3 = "e167f68d6563d75bb25f3aa49c29ef612d41352dc00606de7cbd630bb2665f51";
    EXPECT_EQ(_sha3,(*sha3)("Hello World"));
}

TEST(Unit_md5,md5)
{
    std::unique_ptr<MD5>(md5) = std::make_unique<MD5>();
    std::string _md5 = "b10a8db164e0754105b7a99be72e3fe5";
    EXPECT_EQ(_md5,(*md5)("Hello World"));
}