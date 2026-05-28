#include "print.hpp"
#include <gtest/gtest.h>
#include <sstream>

TEST(Print, InStream)
{
  std::ostringstream out;
  print("hello", out);
  EXPECT_EQ(out.str(), "hello");
}
