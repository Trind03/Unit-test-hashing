#include <iostream>
#include <gtest/gtest.h>
#include "../lib/hash/sha256.h"
#include "../lib/hash/sha1.h"
#include "../lib/hash/sha3.h"
#include "../lib/hash/md5.h"


TEST(Unit_sha256,sha256)
{
    SHA256 SHA256;
    std::string _sha256 = "a591a6d40bf420404a011733cfb7b190d62c65bf0bcda32b57b277d9ad9f146e";
    EXPECT_EQ(_sha256,SHA256("Hello World"));
}

TEST(Unit_sha1,sha1)
{
    SHA1 SHA1;
    std::string _sha1 = "0a4d55a8d778e5022fab701977c5d840bbc486d0";
    EXPECT_EQ(_sha1,SHA1("Hello World"));
}

TEST(Unit_sha3,sha3)
{
    SHA3 SHA3;
    std::string _sha3 = "e167f68d6563d75bb25f3aa49c29ef612d41352dc00606de7cbd630bb2665f51";
    EXPECT_EQ(_sha3,SHA3("Hello World"));
}

TEST(Unit_md5,md5)
{
    MD5 MD5;
    std::string _md5 = "b10a8db164e0754105b7a99be72e3fe5";
    EXPECT_EQ(_md5,MD5("Hello World"));
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}