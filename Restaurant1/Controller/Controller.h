//
// Created by Denisa on 6/5/2024.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Repo/Repo.h"
#include<vector>
#include <string>
#pragma once
class Product;
using namespace std;


class Controller{
private:
    Repository* repository;
public:
    Controller( Repository* repository);
    ~Controller();
    void addProduct(Product product);
    void removeProduct(string prodName);
    void getByName(string seq);
    void getAll();
    void createOrder(int id,string nameCustomer,string name,int quantity);
    double calculateTotal();




};
#endif //CONTROLLER_H
