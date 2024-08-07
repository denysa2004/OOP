//
// Created by Denisa on 6/5/2024.
//
#include "Product.h"
Product::Product(std::string name,  int price ,int preparation) {
    this->name = name;
    this->preparation = preparation;
    this->price = price;
}

int Product::getPrice() {
    return this->price;
}

string Product::getName() {
    return this->name;
}

int Product::getPreparation() {
    return this->preparation;
}

void Product::setPreparation(int newP) {
    preparation = newP;
}
void Product::setPrice(int newP) {
    price = newP;
}


string Product::printProd(){
    string result;
    result = "Name: " + name  + ", Price: " + to_string(price) + ",\n" + "     "
            + ", Expiration date: " + to_string(preparation);
    return result;
}