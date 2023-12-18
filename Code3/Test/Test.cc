#include "gtest/gtest.h"
#include "Calci/calculator.h"

TEST(CalculatorTest, Addition) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(CalculatorTest, Division) {
    Calculator calc;
    EXPECT_EQ(calc.divide(6, 2), 3);
}

TEST(CalculatorTest, Multiplication) {
    Calculator calc;
    EXPECT_EQ(calc.multiply(2, 3), 8);
}

TEST(CalculatorTest, Subtraction) {
    Calculator calc;
    EXPECT_EQ(calc.subtract(5, 3), 2);
}



