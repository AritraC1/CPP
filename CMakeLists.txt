cmake_minimum_required(VERSION 3.16)

project(CPPProjects LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

file(GLOB_RECURSE CPP_LEARNING_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/basics/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/dsa/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/maths/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/oop/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/patterns/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/common/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/utils/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/practice/leetcode/*.cpp"
)

add_executable(cpp_learning
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
    ${CPP_LEARNING_SOURCES}
    utils/swap_utils.cpp
    utils/array_utils.hpp
    utils/array_utils.cpp
    utils/vector_utils.hpp
    utils/vector_utils.cpp
    utils/string_utils.hpp
    utils/string_utils.cpp
)

target_include_directories(cpp_learning PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/common"
)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
    target_compile_options(cpp_learning PRIVATE -Wall -Wextra)
endif()
