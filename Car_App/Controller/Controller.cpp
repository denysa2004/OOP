//
// Created by Denisa on 6/6/2024.
//
#include "Controller.h"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

Controller::Controller(Repository *repository) {
    this->repository = repository;
}

void Controller::addRoute(BusRoute newRoute) {
    repository->addRoute(newRoute);     //adaugare de ruta

}

void Controller::getAll() {
    vector<BusRoute> products = repository->getAll();
    for (BusRoute item : products) {    //afisarea tuturor rutelor
        cout << "Name: " << item.getId() << endl;
        cout << "Price " << item.getPrice() << endl;
        cout << "Direction"<<item.getBothDirection()<<endl;
        cout<<endl;

    }

}
void Controller::sortByTown() {
    repository->sortByTown();        //sortatre
}
Controller::~Controller() = default;
