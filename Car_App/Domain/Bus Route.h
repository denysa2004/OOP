//
// Created by Denisa on 6/6/2024.
//

#ifndef BUS_ROUTE_H
#define BUS_ROUTE_H

#include <iostream>
#include <string>
#include <utility>
using namespace std;
#include "town.h"

class BusRoute{
private:
    int id;
    int id_starting_place;   //id de incepere
    int id_arrival_place;   //id  de plecare
    int price;               //pretul
    bool bothDirection;

public:
    BusRoute(int id,int id_starting_place,int id_arrival_place,int price,bool bothDirection);
    int getId();
    int getLocatii();
    int getPrice();
    bool getBothDirection();

};

#endif //BUS_ROUTE_H
