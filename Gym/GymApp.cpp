#include "GymApp.h"
#include <iostream>
#include <string>
using namespace std;
void GymApp::run() {
    char choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Member\n";
        cout << "2. Remove Member\n";
        cout << "3. View Member Details\n";
        cout << "4. List All Members\n";
        cout << "5. Find Member by Name\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1':
                addMember();
                break;
            case '2':
                removeMember();
                break;
            case '3':
                viewMemberDetails();
                break;
            case '4':
                listAllMembers();
                break;
            case '5':
                findMemberByName();
                break;
            case '6':
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
                break;
        }
    } while(choice != '6');
}

void GymApp::addMember() {
    int id;
    string name, membershipType;
    cout << "Enter member ID: ";
    cin >> id;
    cout << "Enter member name: ";
    cin.ignore();
    cin>>name;
    cout << "Enter membership type: ";
    cin>>membershipType;
    controller.addMember(id, name, membershipType);
}

void GymApp::removeMember() {
    int id;
    cout << "Enter member ID to remove: ";
    cin >> id;
    controller.removeMember(id);
}

void GymApp::viewMemberDetails() {
    int id;
    cout << "Enter member ID: ";
    cin >> id;
    Member* member = controller.getMemberDetails(id);
    if (member) {
       cout << "Member Details:\n";
        cout << "ID: " << member->getId() << ", Name: " << member->getName() << ", Membership Type: " << member->getMembershipType() << "\n";
    } else {
        cout << "Member not found!\n";
    }
}

void GymApp::listAllMembers() {
    vector<Member> members = controller.getAllMembers();
    if (!members.empty()) {
        view.showMembers(members);
    } else {
        cout << "No members !\n";
    }
}

void GymApp::findMemberByName() {
    string name = view.getMemberName();
    Member* member = controller.findMemberByName(name);
    if (member) {
        cout << "Member found:\n";
        cout << "ID: " << member->getId() << ", Name: " << member->getName() << ", Membership Type: " << member->getMembershipType() << "\n";
    } else {
        cout << "Member not found!\n";
    }
}
