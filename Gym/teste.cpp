#include "GymController.h"
#include "Payment.h"
#include <cassert>

void testGymController() {

    GymController gymController;


    gymController.addMember(1, "John Doe", "Basic");
    gymController.addMember(2, "Jane Smith", "Premium");


    std::vector<Member> members = gymController.getAllMembers();
    assert(members.size() == 2);


    Member* member = gymController.getMemberDetails(1);
    assert(member != nullptr);
    assert(member->getId() == 1);
    assert(member->getName() == "John Doe");
    assert(member->getMembershipType() == "Basic");


    Member* foundMember = gymController.findMemberByName("Jane Smith");
    assert(foundMember != nullptr);
    assert(foundMember->getId() == 2);
    assert(foundMember->getName() == "Jane Smith");
    assert(foundMember->getMembershipType() == "Premium");


    Member* notFoundMember = gymController.findMemberByName("Unknown Name");
    assert(notFoundMember == nullptr);
}

void testPayment() {

    double cardAmount = 100.0;
    Payment* cardPayment = new CardPayment();
    cardPayment->pay(cardAmount);
    delete cardPayment;


    double cashAmount = 50.0;
    Payment* cashPayment = new CashPayment();
    cashPayment->pay(cashAmount);
    delete cashPayment;
}


