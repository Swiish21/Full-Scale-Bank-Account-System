#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount(const std::string& owner, double balance, double interestRate);
    void applyInterest();

private:
    double interestRate;
};

#endif // SAVINGSACCOUNT_H