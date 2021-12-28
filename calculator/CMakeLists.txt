cmake_minimum_required(VERSION 3.10)

set(LibraryName Calculator)

# Create library
add_library(${LibraryName}
    calculator.h calculator.cpp
)

target_include_directories(${LibraryName} PUBLIC ./)    # add public so that test module can include header files
