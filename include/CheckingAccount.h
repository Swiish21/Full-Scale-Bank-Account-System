#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
public:
    CheckingAccount(const std::string& owner, double balance);
    bool withdraw(double amount) override;
};

#endif // CHECKINGACCOUNT_H