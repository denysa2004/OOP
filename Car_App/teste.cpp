//
// Created by Denisa on 6/6/2024.
//
#include <cassert>
#include <iostream>
#include <vector>
#include "Repo/Repo.h"

void testAddRoute() {      //test pt adaugare de ruta
    Repository repo;
    BusRoute route1(1, 2,3,100,true);
    BusRoute route2(2,  2,3,100,false);
    BusRoute route3(1,4,3,100,false );

    repo.addRoute(route1);
    repo.addRoute(route2);
    repo.addRoute(route3);

    std::vector<BusRoute> routes = repo.getAll();
    if ( routes[0].getId() == 1 && routes[1].getId() == 2) {
        std::cout << "testAddRoute PASSED" << std::endl;
    } else {
        std::cout << "testAddRoute FAILED" << std::endl;
    }
}



void testSortByTown() {   //teste pt sortatre de ruta
    Repository repo;

    BusRoute route1(1, 2,3,100,true);
    BusRoute route2(2,  2,3,100,false);
    BusRoute route3(1,4,3,100,false );

    repo.addRoute(route1);
    repo.addRoute(route2);
    repo.addRoute(route3);

    std::vector<BusRoute> sortedRoutes = repo.sortByTown();
    if (sortedRoutes.size() == 3 &&
        sortedRoutes[0].getId() == 1 &&
        sortedRoutes[1].getId() == 2 &&
        sortedRoutes[2].getId() == 3) {
        std::cout << "testSortByTown PASSED" << std::endl;
        } else {
            std::cout << "testSortByTown FAILED" << std::endl;
        }
}



