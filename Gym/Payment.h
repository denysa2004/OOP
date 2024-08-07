#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {
public:
    virtual ~Payment() {}
    virtual void pay(double amount) = 0;
};

class CardPayment : public Payment {
public:
    void pay(double amount) override;
};

class CashPayment : public Payment {
public:
    void pay(double amount) override;
};

#endif // PAYMENT_H
