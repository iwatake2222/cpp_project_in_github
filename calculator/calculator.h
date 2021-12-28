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
#ifndef CALCULATOR_H_
#define CALCULATOR_H_

/*** Include ***/
/* for general */
#include <cstdint>
#include <cstdio>
#include <memory>
#include <vector>
#include <array>

class Calculator
{
public:
    Calculator();
    ~Calculator();
    int32_t Run(char op, int32_t a, int32_t b);

};

#endif
