//
// Created by Denisa on 6/6/2024.
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
   cout<<"1.Add new bus route\n";
    cout << "2. View all routes \n";  //pt meniu
    cout<<"3.Sort by town\n";
    cout<<"4. EXIT";
    cout<< "\n";
}

int UI::getUserChoice() {
    int choice;
    cout << "Select an option:\n";    //adaugare de optiune
    cin >> choice;
    return choice;
}

void UI::processUserChoice(int choice) {
    while ( choice != 4)
    {
        if ( choice == 1)
        {
            string name;
            int id;
            int id_starting_place;
            int id_arrival_place;
            int price;
            bool bothDirection;
            cout<<"Enter id";
            cin>>id;
            cout<<"Enter starting place";
            cin>>id_starting_place;
            cout<<"Enter arrival place";
            cin>>id_arrival_place;
            cout<<"Enter price";
            cin>>price;
            cout<<"Both direction --->true /false";
            cin>>bothDirection;
            BusRoute newRoute = BusRoute(id,id_starting_place,id_arrival_place,price,bothDirection);
            controller->addRoute(newRoute);
        }
        else if ( choice == 2){
            controller->getAll();
        }
        else if(choice==3) {
            controller->sortByTown();
        }
        else cout<< "\nInvalid input! Try again!\n\n";
        displayOptions();
        choice = getUserChoice();
    }
}