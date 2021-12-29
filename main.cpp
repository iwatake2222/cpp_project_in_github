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
#include <memory>
#include <vector>
#include <string>
#include <stdexcept>

#include "calculator.h"

/*** Macro ***/

/*** Setting ***/

/*** Global variable ***/

/*** Function ***/
int main(int argc, char* argv[])
{
    std::cout << ">";
    std::string str_a, str_op, str_b;
    std::cin >> str_a >> str_op >> str_b;
    try {
        int32_t a = std::stoi(str_a);
        char op = str_op[0];
        int32_t b = std::stoi(str_b);

        Calculator calc;
        int32_t ans = calc.Run(op, a, b);
        std::cout << std::to_string(a) + " " + op + " " + std::to_string(b) + " = " + std::to_string(ans) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "[Exception][Invalid Argument]: " << e.what() << std::endl;
    } catch (const std::out_of_range & e) {
        std::cout << "[Exception][Out of Range]: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "[Exception]: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "[Exception]: " << std::endl;
    }

    /* Cause security warning */
    // char buffer[1];
    // buffer[3] = 1;

    return 0;
}
