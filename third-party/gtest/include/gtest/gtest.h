#pragma once

#include <cstdlib>
#include <iostream>
#include <stdexcept>

#define TEST(SuiteName, TestName) int main()

#define EXPECT_EQ(actual, expected) do { if (!((actual) == (expected))) { std::cerr << "EXPECT_EQ failed" << std::endl; std::exit(1); } } while (false)
#define EXPECT_TRUE(value) do { if (!(value)) { std::cerr << "EXPECT_TRUE failed" << std::endl; std::exit(1); } } while (false)
#define EXPECT_THROW(statement, exception_type) do { bool caught = false; try { statement; } catch (const exception_type&) { caught = true; } if (!caught) { std::cerr << "EXPECT_THROW failed" << std::endl; std::exit(1); } } while (false)
