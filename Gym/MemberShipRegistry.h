#ifndef MEMBERSHIPREGISTRY_H
#define MEMBERSHIPREGISTRY_H

#include <vector>
#include "Members.h"
#include <iostream>
using namespace std;
class MembershipRegistry {
private:
    vector<Member> members;
    static MembershipRegistry* instance;

    MembershipRegistry() {}

public:
    static MembershipRegistry& getInstance();

    void addMember(const Member& member);
    void removeMember(int memberId);
    Member* getMember(int memberId);
    vector<Member> getMembers() const;
    Member* findMemberByName(const string& name);
};

#endif // MEMBERSHIPREGISTRY_H
