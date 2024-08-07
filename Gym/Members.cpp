

#include "Members.h"
#include <string>
#include <iostream>
using namespace std;

Member::Member(int id, const string& name, const string& membership_type, bool active)
    : id(id), name(name), membership_type(membership_type), active(active) {}

int Member::getId() const {
    return id;
}

void Member::setId(int id) {
    this->id = id;
}

string Member::getName() const {
    return name;
}

void Member::setName(const string& name) {
    this->name = name;
}

string Member::getMembershipType() const {
    return membership_type;
}

void Member::setMembershipType(const string& membership_type) {
    this->membership_type = membership_type;
}

bool Member::isActive() const {
    return active;
}

void Member::setActive(bool active) {
    this->active = active;
}
