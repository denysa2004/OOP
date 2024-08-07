//
// Created by Denisa on 6/6/2024.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Repo/Repo.h"
#include<vector>
#include <string>
#pragma once
class BusRoute;
using namespace std;


class Controller{
private:
    Repository* repository;
public:
    Controller( Repository* repository);
    ~Controller();
    void addRoute(BusRoute route);
    void getAll();
    void sortByTown();
};

#endif //CONTROLLER_H
