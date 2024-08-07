cmake_minimum_required(VERSION 3.28)
project(practic)

set(CMAKE_CXX_STANDARD 17)

add_executable(practic main.cpp
        Domain/town.cpp
        Domain/town.h
        "Domain/Bus Route.cpp"
        "Domain/Bus Route.h"
        Repo/Repo.h
        Repo/Repo.cpp
        Controller/Controller.cpp
        Controller/Controller.h
        UI/UI.cpp
        UI/UI.h
        teste.cpp)
