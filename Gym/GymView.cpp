#include <iostream>
#include "GymView.h"
#include "Members.h"
using namespace std;
void GymView::showMembers(const vector<Member>& members) {
    cout << "Members:\n";
    for (const auto& member : members) {
        cout << "ID: " << member.getId() << ", Name: " << member.getName() << ", Membership Type: " << member.getMembershipType() << "\n";
    }
}

void GymView::displayMessage(const string& message) {
    cout << message << endl;
}

int GymView::getMemberId() {
    int memberId;
    cout << "Enter member ID: ";
    cin >> memberId;
    return memberId;
}

string GymView::getMemberName() {
    string memberName;
    cout << "Enter member name: ";
    cin.ignore();
    cin>>memberName;
    return memberName;
}
