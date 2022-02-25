/* Copyright 2021 iwatake2222

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
/*** Include ***/
/* for general */
#include <cstdint>
#include <cstdio>
#include <vector>
#include <array>
#include <string>
#include <memory>
#include <stdexcept>

/* GoogleTest */
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "calculator.h"

namespace {
#if 0
}    // indent guard
#endif



class TestCalculator : public testing::Test
{
protected:
    TestCalculator() {
        // You can do set-up work for each test here.
    }

    ~TestCalculator() override {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    void SetUp() override {
        // Code here will be called immediately after the constructor (right
        // before each test).
    }

    void TearDown() override {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }
};

TEST_F(TestCalculator, BasicTest)
{
    EXPECT_TRUE(true);
}

TEST_F(TestCalculator, Add)
{
    Calculator calc;
    EXPECT_EQ(0, calc.Run('+', 0, 0));
    EXPECT_EQ(1, calc.Run('+', 0, 1));
    EXPECT_EQ(1, calc.Run('+', 1, 0));
    EXPECT_EQ(-1, calc.Run('+', 0, -1));
    EXPECT_EQ(-1, calc.Run('+', -1, 0));
    EXPECT_EQ(20, calc.Run('+', 10, 10));
    EXPECT_EQ(30, calc.Run('+', 10, 20));
    EXPECT_EQ(30, calc.Run('+', 20, 10));
}

TEST_F(TestCalculator, Sub)
{
    Calculator calc;
    EXPECT_EQ(0, calc.Run('-', 0, 0));
    EXPECT_EQ(-1, calc.Run('-', 0, 1));
    EXPECT_EQ(1, calc.Run('-', 1, 0));
    EXPECT_EQ(1, calc.Run('-', 0, -1));
    EXPECT_EQ(-1, calc.Run('-', -1, 0));
    EXPECT_EQ(0, calc.Run('-', 10, 10));
    EXPECT_EQ(-10, calc.Run('-', 10, 20));
    EXPECT_EQ(10, calc.Run('-', 20, 10));
}

TEST_F(TestCalculator, Mul)
{
    Calculator calc;
    EXPECT_EQ(0, calc.Run('*', 0, 0));
    EXPECT_EQ(0, calc.Run('*', 0, 2));
    EXPECT_EQ(0, calc.Run('*', 2, 0));
    EXPECT_EQ(0, calc.Run('*', 0, -2));
    EXPECT_EQ(0, calc.Run('*', -2, 0));
    EXPECT_EQ(4, calc.Run('*', 2, 2));
    EXPECT_EQ(-4, calc.Run('*', 2, -2));
    EXPECT_EQ(-4, calc.Run('*', -2, 2));
    EXPECT_EQ(100, calc.Run('*', 10, 10));
    EXPECT_EQ(200, calc.Run('*', 10, 20));
    EXPECT_EQ(200, calc.Run('*', 20, 10));
}


TEST_F(TestCalculator, InvalidOp)
{
    Calculator calc;
    EXPECT_THROW(calc.Run('1', 0, 0), std::invalid_argument);
    EXPECT_THROW(calc.Run(' ', 0, 0), std::invalid_argument);
    EXPECT_THROW(calc.Run('?', 0, 0), std::invalid_argument);
}

}
