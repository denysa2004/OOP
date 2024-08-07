//
// Created by Denisa on 6/5/2024.
//

#ifndef UI_H
#define UI_H
#include "../Controller/Controller.h"
#include "../Domain/Product.h"
#pragma once
#include <iostream>
using namespace std;

class UI{
private:
    Controller* controller;
public:
    UI(Controller* controller);
    void displayOptions();
    int getUserChoice();
    void processUserChoice(int choice);
    ~UI();
};

#endif //UI_H
