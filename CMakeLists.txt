cmake_minimum_required(VERSION 4.0)
project(WritingACompilerInCpp VERSION 1.0.0 LANGUAGES CXX)

add_library(WritingACompilerInCppLib STATIC)
add_subdirectory(src)
target_compile_features(WritingACompilerInCppLib PUBLIC cxx_std_20)
target_include_directories(WritingACompilerInCppLib PUBLIC include)

add_executable(WritingACompilerInCpp src/main.cpp)
target_link_libraries(WritingACompilerInCpp PRIVATE WritingACompilerInCppLib)

