#include "Bus Route.h"
//
// Created by Denisa on 6/6/2024.
//
#include "Bus Route.h"
BusRoute::BusRoute(int id,int id_starting_place,int id_arrival_place,int price,bool bothDirection) {
    this->id = id;
    this->price = price;
    this->bothDirection=bothDirection;
    this->id_arrival_place=id_arrival_place;
    this->id_starting_place=id_starting_place;
}


int BusRoute::getId() {
    return this->id;
}

int BusRoute::getPrice() {
    return this->price;
}

bool BusRoute::getBothDirection() {
    return this->bothDirection;
}

int BusRoute::getLocatii() {
    return this->id_starting_place,this->id_arrival_place;
}

