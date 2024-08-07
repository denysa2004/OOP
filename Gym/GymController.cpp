#include "GymController.h"
#include <iostream>
#include <string>
using namespace std;
void GymController::addMember(int id, const string& name, const string& membership_type) {
    MembershipRegistry::getInstance().addMember(Member(id, name, membership_type));
}

void GymController::removeMember(int id) {
    MembershipRegistry::getInstance().removeMember(id);
}

Member* GymController::getMemberDetails(int id) {
    return MembershipRegistry::getInstance().getMember(id);
}

vector<Member> GymController::getAllMembers() {
    return MembershipRegistry::getInstance().getMembers();
}

Member* GymController::findMemberByName(const string& name) {
    return MembershipRegistry::getInstance().findMemberByName(name);
}
