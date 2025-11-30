cmake_minimum_required(VERSION 3.17)
project(cppMutilThreadLearn)

set(CMAKE_CXX_STANDARD 11)

add_executable(cppMutilThreadLearn main.cpp)
add_executable(simpleTask simpleTask.cpp)
add_executable(anotherSimpleTask anotherSimpleTask.cpp)
add_executable(liftTimeQuestion liftTimeQuestion.cpp)
add_executable(expectionHandle expectionHandle.cpp)

