cmake_minimum_required(VERSION 3.15)
project(CalculatorProject CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add GoogleTest
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

set(INSTALL_GTEST OFF)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Our library
add_library(calculator_lib
    src/calculator.cpp
)

target_include_directories(calculator_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Test executable
add_executable(calculator_tests
    tests/test_calculator.cpp
)

target_link_libraries(calculator_tests
    PRIVATE
        calculator_lib
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(calculator_tests)
