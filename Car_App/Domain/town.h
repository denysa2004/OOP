//
// Created by Denisa on 6/6/2024.
//

#ifndef TOWN_H
#define TOWN_H
#include <iostream>
#include <string>

using namespace std;


class Town{
private:
    string name;    //numele
    int id;         //id
    string type;    //type

public:
    Town(int id,string name,string type);

    string getName();
    int getId();
    string getType();
    string printTown();

};

#endif //TOWN_H
