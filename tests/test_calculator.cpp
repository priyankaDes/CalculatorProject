#include "gtest/gtest.h"
#include "calculator.h"

TEST(CalculatorTest, Add) {
    Calculator c;
    EXPECT_EQ(c.add(2, 3), 5);
}

TEST(CalculatorTest, Sub) {
    Calculator c;
    EXPECT_EQ(c.sub(5, 3), 2);
}

TEST(CalculatorTest, Mul) {
    Calculator c;
    EXPECT_EQ(c.mul(4, 3), 12);
}

TEST(CalculatorTest, Div) {
    Calculator c;
    EXPECT_DOUBLE_EQ(c.div(10.0, 2.0), 5.0);
}

TEST(CalculatorTest, Fib) {
    Calculator c;
    EXPECT_EQ(c.fib(6),8);

}