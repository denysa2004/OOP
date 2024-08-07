#ifndef GYMCONTROLLER_H
#define GYMCONTROLLER_H

#include <string>
#include "MembershipRegistry.h"

class GymController {
public:
    void addMember(int id, const std::string& name, const std::string& membership_type);
    void removeMember(int id);
    Member* getMemberDetails(int id);
    std::vector<Member> getAllMembers();
    Member* findMemberByName(const std::string& name);
};

#endif // GYMCONTROLLER_H
