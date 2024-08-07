//
// Created by Denisa on 6/6/2024.
//
//
// Created by Denisa on 6/5/2024.
//
#include "Town.h"
Town::Town(int id,std::string name, std::string type) {
    this->name = name;
    this->id = id;
    this->type = type;
}

int Town::getId() {
    return this->id;
}

string Town::getName() {
    return this->name;
}

string Town::getType() {
    return this->type;
}

string Town::printTown(){
    string result;
    result = "Name: " + name  + ", ID: " + to_string( id) + ",\n" + "     "
            + ", Type: " + type;
    return result;
}