//
// Created by Denisa on 6/5/2024.
//
#include "ui.h"
#include <iostream>
#include <string>
#include <limits>
using namespace std;

UI::UI(Controller* controller){
    this->controller = controller;
}

UI::~UI() = default;

void UI::displayOptions() {
    cout<< "\n";
    cout << "1. Add a new product\n";
    cout << "2. View all products \n";
    cout << "3. Get product by name\n";
    cout<< "4. Remove product\n";
    cout<<"5.Make Order\n";
    cout<<"6. Calculate total of Orders\n";
    cout<<"7. EXIT";
    cout<< "\n";
}

int UI::getUserChoice() {
    int choice;
    cout << "Select an option:\n";
    cin >> choice;
    return choice;
}

void UI::processUserChoice(int choice) {
    while ( choice != 7)
    {
        if ( choice == 1)
        {
            string name;
            int price;
            int preparation;
            cout<<"Enter food name :";
            cin>>name;
            cout<<"Enter price:";
            cin>>price;
            cout<<"Enter preparation time:";
            cin>>preparation;
            Product newfood = Product( name,price,preparation);
            controller->addProduct(newfood);
        }
        else if ( choice == 2){
            controller->getAll();
        }
        else if ( choice == 3) {
            string name;
            cin>>name;
            controller->getByName(name);
        }
        else if(choice==4) {
            string name;
            cin>>name;
            controller->removeProduct(name);
        }
        else if(choice==5) {
            string name,nameCustomer;
            int quantity,id;
            cin>>name>>quantity>>id>>nameCustomer;
            controller->createOrder(id,nameCustomer,name,quantity);
        }

        else if (choice==6) {
            controller->calculateTotal();
        }
        else cout<< "\nInvalid input! Try again!\n\n";
        displayOptions();
        choice = getUserChoice();
    }
}