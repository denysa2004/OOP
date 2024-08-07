#include "MembershipRegistry.h"
#include <algorithm>

MembershipRegistry* MembershipRegistry::instance = nullptr;

MembershipRegistry& MembershipRegistry::getInstance() {
    if (!instance) {
        instance = new MembershipRegistry();
    }
    return *instance;
}

void MembershipRegistry::addMember(const Member& member) {
    members.push_back(member);
}

void MembershipRegistry::removeMember(int memberId) {
    for (auto it = members.begin(); it != members.end(); ++it) {
        if (it->getId() == memberId) {
            members.erase(it);
            break;
        }
    }
}

Member* MembershipRegistry::getMember(int memberId) {
    for (auto& member : members) {
        if (member.getId() == memberId) {
            return &member;
        }
    }
    return nullptr;
}

vector<Member> MembershipRegistry::getMembers() const {
    return members;
}

Member* MembershipRegistry::findMemberByName(const std::string& name) {
    for (auto& member : members) {
        if (member.getName() == name) {
            return &member;
        }
    }
    return nullptr;
}
