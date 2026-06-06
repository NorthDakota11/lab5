cmake_minimum_required(VERSION 3.4)
project(banking)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Build tests" ON)

add_library(banking STATIC
  banking/account.cpp
  banking/transaction.cpp
)

target_include_directories(banking PUBLIC banking)

if(BUILD_TESTS)
  enable_testing()
  add_executable(check tests/banking_test.cpp)
  target_link_libraries(check banking)
  add_test(NAME check COMMAND check)
endif()
