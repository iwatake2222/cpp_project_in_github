cmake_minimum_required(VERSION 3.10)

# Create project
set(ProjectName "main")
project(${ProjectName})

# Compile option
set(CMAKE_INSTALL_PREFIX "./install" CACHE STRING "install path" FORCE)
include(${CMAKE_SOURCE_DIR}/cmakes/compile_option.cmake)

# Create executable file
add_executable(${ProjectName}
    main.cpp
)

# Add source
# target_sources(${ProjectName} PRIVATE 
#     ooo.cpp
# )

# Add sub modules
add_subdirectory(./calculator)
target_link_libraries(${ProjectName} Calculator)

# Add test module
option(BUILD_TESTS "BUILD_TESTS" ON)
if (BUILD_TESTS)
    enable_testing()
    add_subdirectory(./test)
endif()
