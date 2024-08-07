#ifndef GYMAPP_H
#define GYMAPP_H

#include "GymController.h"
#include "GymView.h"

class GymApp {
private:
    GymController controller;
    GymView view;

    void addMember();
    void removeMember();
    void viewMemberDetails();
    void listAllMembers();
    void findMemberByName();

public:
    void run();
};

#endif // GYMAPP_H
