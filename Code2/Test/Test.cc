#include "gtest/gtest.h"
#include "src/Addition/Addition.h"
#include "src/Multiplication/Multiplication.h"
#include "src/Division/Division.h"
#include "src/Subtraction/Subtraction.h"

TEST(additionTest, returnAddition){

    EXPECT_EQ(30,add(10,20));

}

TEST(subractionTest, returnSubraction){

    EXPECT_EQ(-8,subtract(20,8));

}

TEST(multiplicationTest, returnMultiplication){

    
    EXPECT_EQ(10,multiply(5,2));

}

TEST(divisionTest, returnDivision){

    EXPECT_EQ(2,divide(4,2));
    
}


