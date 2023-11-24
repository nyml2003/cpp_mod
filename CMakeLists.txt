cmake_minimum_required(VERSION 3.26)
project(mod)

set(CMAKE_CXX_STANDARD 14)

add_executable(mod
        main.cpp
        IOperation.h
        Register.h
        Add.h
        OperationFactory.h
        Calculator.h
        Sub.h
)
