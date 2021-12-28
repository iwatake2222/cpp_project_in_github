# Awesome C++ Project in GitHub
- Create a simple calculator

## CI Status
Status | Build Type
------ | ----------
[![CMake_x64](https://github.com/iwatake2222/cpp_project_in_github/actions/workflows/cmake_x64.yml/badge.svg)](https://github.com/iwatake2222/cpp_project_in_github/actions/workflows/cmake_x64.yml) | windows-latest, ubuntu-latest, macos-latest
[![CMake_ARM](https://github.com/iwatake2222/cpp_project_in_github/actions/workflows/cmake_arm.yml/badge.svg)](https://github.com/iwatake2222/cpp_project_in_github/actions/workflows/cmake_arm.yml) | armv7 + ubuntu18.04, aarch64 + ubuntu18.04
[![CodeQL](https://github.com/iwatake2222/cpp_project_in_github/actions/workflows/codeql-analysis.yml/badge.svg)](https://github.com/iwatake2222/cpp_project_in_github/actions/workflows/codeql-analysis.yml) | ubuntu-latest

## How to Run
### Linux
```sh
mkdir -p build && cd build
cmake ..
make
ctest
./main
```

### Visual Studio
- Create a Visual Studio project using cmake-gui
- Build the project
- Normal execution
    - Set `main` as a startup project
    - Run
- Test
    - Open Test Explorer
    - Run All Tests

![](00_doc/test_in_vs.jpg)

# License
- Awesome C++ Project in GitHub
- https://github.com/iwatake2222/cpp_project_in_github
- Copyright 2021 iwatake2222
- [Licensed under the Apache License, Version 2.0](LICENSE)

# Acknowledgements
- This project utilizes OSS (Open Source Software)
    - [NOTICE.md](NOTICE.md)
