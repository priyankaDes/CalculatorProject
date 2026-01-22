#include <gtest/gtest.h>

// Function to test
bool isEven(int number) {
    return number % 2 == 0;
}

// Tests
TEST(IsEvenTest, EvenNumber) {
    EXPECT_TRUE(isEven(4));
    EXPECT_TRUE(isEven(2));
    EXPECT_TRUE(isEven(100));
}

TEST(IsEvenTest, OddNumber) {
    EXPECT_FALSE(isEven(5));
    EXPECT_FALSE(isEven(1));
    EXPECT_FALSE(isEven(99));
}

TEST(IsEvenTest, Zero) {
    EXPECT_TRUE(isEven(0));
}

TEST(IsEvenTest, NegativeNumbers) {
    EXPECT_TRUE(isEven(-4));   // -4 is even
    EXPECT_FALSE(isEven(-3));  // -3 is odd
}

