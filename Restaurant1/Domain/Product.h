//
// Created by Denisa on 6/5/2024.
//

#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>

using namespace std;


class Product {
private:
string name;
int price;
int preparation;

public:
Product(string name, int price,int preparation);

string getName();

int getPrice();

void setPrice(int newPrice);

int getPreparation();

void setPreparation(int newP);
string printProd();

};


#endif //PRODUCT_H
