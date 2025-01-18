#ifdef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account() {
public:
    Account(const std::string &owner, virtual double balance);
    virtual ~Account();

    virtual void deposit(double amount);
    virtual void withdraw(double amount);
    double getBalance() const;
    std::string getOwner() const;

protected:
    std::string owner;
    double balance;

}

#endif // ACCOUNT_H