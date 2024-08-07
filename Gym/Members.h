//
// Created by Denisa on 6/5/2024.
//

#ifndef MEMBERS_H
#define MEMBERS_H

#endif //MEMBERS_H
#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <iostream>
#include <string>
using namespace std;
class Member {
private:
    int id;
    string name;
    string membership_type;
    bool active;

public:
    Member(int id, const string& name, const string& membership_type, bool active = true);

    int getId() const;
    void setId(int id);

    string getName() const;
    void setName(const string& name);

    string getMembershipType() const;
    void setMembershipType(const string& membership_type);

    bool isActive() const;
    void setActive(bool active);
};

#endif // MEMBER_H
