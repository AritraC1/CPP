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
    "${CMAKE_CURRENT_SOURCE_DIR}/utils/*.cpp"
)

add_executable(cpp_learning
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
    ${CPP_LEARNING_SOURCES}
)
target_include_directories(cpp_learning PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(student_management_system
    projects/student-management-system/src/main.cpp
    projects/student-management-system/src/app/app.cpp
    projects/student-management-system/src/logging/logger.cpp
    projects/student-management-system/src/models/student.cpp
    projects/student-management-system/src/utils/generate_id.cpp
)
target_include_directories(student_management_system PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/projects/student-management-system/src"
)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
    target_compile_options(cpp_learning PRIVATE -Wall -Wextra)
    target_compile_options(student_management_system PRIVATE -Wall -Wextra)
endif()
