#pragma once

#include <cstdlib>
#include <iostream>

#define TEST(SuiteName, TestName) int main()

#define EXPECT_EQ(actual, expected) do { if (!((actual) == (expected))) { std::cerr << "EXPECT_EQ failed" << std::endl; std::exit(1); } } while (false)
