//
// Created by Denisa on 6/6/2024.
//

#ifndef REPO_H
#define REPO_H

#include "../Domain/Bus Route.h"
#include<string>
#include <vector>


class Repository{
private:
    vector<BusRoute> busRoutes;

public:
    Repository();
    void addRoute(BusRoute route);
    void removeRoute(BusRoute route);
    vector<BusRoute> getAll();
    vector<BusRoute> sortByTown();
    ~Repository();
};


#endif //REPO_H
