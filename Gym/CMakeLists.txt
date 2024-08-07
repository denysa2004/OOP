cmake_minimum_required(VERSION 3.28)
project(praktik)

set(CMAKE_CXX_STANDARD 17)

add_executable(praktik main.cpp
        Members.cpp
        Members.cpp
        MemberShipRegistry.cpp
        GymController.cpp
        GymView.cpp
        Payment.cpp
        GymApp.cpp
        Members.h
        MemberShipRegistry.h
        GymController.h
        GymView.h
        GymApp.h
        Payment.h
        teste.cpp
)
