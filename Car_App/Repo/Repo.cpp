//
// Created by Denisa on 6/6/2024.
//

#include "Repo.h"

Repository::Repository() {

}

void Repository::addRoute(BusRoute route) {
    bool exist=false;
    for (auto route1 : busRoutes){
        if (route1.getId() == route.getId()) {     //adaugarea de ruta
            exist=true;
        }
    }
    if(exist==false) {
        busRoutes.push_back(route);
    }
}

vector<BusRoute> Repository::getAll() {
    return busRoutes;                       //afisarea tuturor rutelor
}

vector<BusRoute> Repository::sortByTown() {
    vector<BusRoute> result = busRoutes;
    for(int i = 0; i < result.size(); i++){            //sortare dupa id
        for(int j = i + 1; j < result.size(); j++){
            if(busRoutes[i].getId()>busRoutes[j].getId())
                swap(busRoutes[i],busRoutes[j]);

        }
        return result;
    }
}


Repository::~Repository() = default;