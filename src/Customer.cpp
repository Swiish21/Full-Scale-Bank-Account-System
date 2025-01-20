#include "Customer.h"

Customer::Customer(const std::string& name)
    : name(name) {}

void Customer::addAccount(Account* account) {
    accounts.push_back(account);
}

std::vector<Account*> Customer::getAccounts() const {
    return accounts;
}

std::string Customer::getName() const {
    return name;
}