#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
    Account(const std::string& owner, double balance);
    virtual ~Account() = default;

    virtual void deposit(double amount);
    virtual bool withdraw(double amount);
    double getBalance() const;
    std::string getOwner() const;

protected:
    std::string owner;
    double balance;
};

#endif // ACCOUNT_H