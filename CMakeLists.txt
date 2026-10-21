cmake_minimum_required(VERSION 3.10)
project (CalculatorProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(calculator STATIC calculator.cpp calculator.h)
add_executable(calculator_app main.cpp)
target_link_libraries(calculator_app PRIVATE calculator)
