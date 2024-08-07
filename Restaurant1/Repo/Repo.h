//
// Created by Denisa on 6/5/2024.
//

#ifndef PRODUCTREPO_H
#define PRODUCTREPO_H

#include "../Domain/Product.h"
#include<string>
#include <vector>


class Repository{
private:
    vector<Product> products;
    std::vector<std::pair<Product, int>> orders;
public:
    Repository();
    void addProduct(Product product);
    void removeProduct(string prodName);
    vector<Product> getByName(string seq);
    vector<Product> getAll();
    void createOrder(int id,string nameCustomer,string name,int quantity);
    double calculateTotal( );
    ~Repository();
};


#endif //PRODUCTREPO_H
