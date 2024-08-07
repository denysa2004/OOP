//
// Created by Denisa on 6/5/2024.
//
#include "Repo.h"

Repository::Repository() {

}

void Repository::addProduct(Product product) {
    bool exist=false;
    for (auto& product1 : products) {
        if (product1.getName() == product.getName()) {
            exist=true;
        }
    }
    if(exist==false) {
        products.push_back(product);
    }

}

vector<Product> Repository::getAll() {
    return products;
}

void Repository::removeProduct(string prodName) {
    std::vector<Product> updatedProducts;
    bool found = false;
    for ( auto product : products) {
        if (product.getName() != prodName) {
            updatedProducts.push_back(product);
        } else {
            found = true;
        }
    }
    if (found) {
        std::cout << "Product removed: " << prodName << std::endl;
    } else {
        std::cout << "Product not found: " << prodName << std::endl;
    }
    products = std::move(updatedProducts);
}

vector<Product> Repository::getByName(std::string seq) {
    vector<Product> result;
    for(int i = 0; i < products.size(); i++){
        if(products[i].getName().find(seq) != std::string::npos){
            result.push_back(products[i]);
        }
    }
    return result;
}

void Repository::createOrder(int id,string nameCustomer,string name,int quantity) {
    for (auto product : products) {
        if (product.getName() == name) {
            orders.push_back({product, quantity});
            std::cout << "Order created: " << name << " Quantity: " << quantity << " id "<< id<< " customer " << nameCustomer<<std::endl;
            return;
        }
    }
    std::cout << "Product not found: " << name<< std::endl;
}

double Repository::calculateTotal()  {
    double total = 0;
    for (auto order : orders) {
        for ( auto product : products) {
            if (order.first.getName() == product.getName()) {
                total += product.getPrice() * order.second; // price * quantity

            }
        }
    }
    cout<<total;
}

Repository::~Repository() = default;