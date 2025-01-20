#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Account.h"

class Customer {
public:
    Customer(const std::string& name);
    void addAccount(Account* account);
    std::vector<Account*> getAccounts() const;
    std::string getName() const;

private:
    std::string name;
    std::vector<Account*> accounts;
};

#endif // CUSTOMER_H