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
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <stdexcept>

#include "calculator.h"

/*** Macro ***/

/*** Setting ***/

/*** Global variable ***/

/*** Function ***/
Calculator::Calculator()
{
    // do nothing
}

Calculator::~Calculator()
{
    // do nothing
}

int32_t Calculator::Run(char op, int32_t a, int32_t b)
{
    switch (op) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    default:
        throw std::invalid_argument(std::string("Unsupported op: [") + op + "]");
    }
    return 0;
}
