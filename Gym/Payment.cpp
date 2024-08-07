#include "Payment.h"
#include <iostream>
using namespace std;

void CardPayment::pay(double amount) {
    cout << "Paying " << amount << " via card.\n";

}

void CashPayment::pay(double amount) {
    std::cout << "Paying " << amount << " in cash.\n";

}
