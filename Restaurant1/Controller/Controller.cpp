//
// Created by Denisa on 6/5/2024.
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

void Controller::addProduct(Product newproduct) {
    repository->addProduct(newproduct);

}

void Controller::removeProduct(string prodname) {
    repository->removeProduct(prodname);

}

void Controller::getAll() {
    vector<Product> products = repository->getAll();
    for (Product item : products) {
        cout << "Name: " << item.getName() << endl;
        cout << "Price " << item.getPrice() << endl;
        cout << "Preparation time" << item.getPreparation()<<endl;
        cout<<endl;

    }

}

void Controller::getByName(string seq) {
     vector<Product> products = repository->getByName(seq);
    for (Product item : products) {
        cout << "Name: " << item.getName() << endl;
        cout << "Price " << item.getPrice() << endl;
        cout << "Preparation time" << item.getPreparation()<<endl;
        cout<<endl;

    }
}
void Controller::createOrder(int id,string nameCustomer,string name,int quantity) {
    repository->createOrder(id,nameCustomer,name,quantity);
}

double Controller::calculateTotal()  {
    return repository->calculateTotal();
}

Controller::~Controller() = default;