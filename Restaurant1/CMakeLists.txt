cmake_minimum_required(VERSION 3.28)
project(praktik_oop)

set(CMAKE_CXX_STANDARD 17)

add_executable(praktik_oop main.cpp
        Domain/Product.h
        Domain/Product.cpp
        Repo/Repo.h
        Repo/Repo.cpp
        Controller/Controller.h
        Controller/Controller.cpp
        UI/UI.h
        UI/UI.cpp)
