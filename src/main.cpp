#include <future>
#include <gtest/gtest.h>
#include "tests.h"

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc,argv);
    std::future<int>process = std::async(std::launch::async,&RUN_ALL_TESTS);
    return process.get();
}
