#ifndef GYMVIEW_H
#define GYMVIEW_H

#include <vector>
#include <string>
#include "Members.h"

class GymView {
public:
    void showMembers(const std::vector<Member>& members);
    void displayMessage(const std::string& message);
    int getMemberId();
    std::string getMemberName();
};

#endif // GYMVIEW_H
