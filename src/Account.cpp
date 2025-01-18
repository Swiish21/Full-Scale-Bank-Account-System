#include "Account.h"

Account::Account(const std::string& owner, double balance)
    : owner(owner), balance(balance) {}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount > balance) {
        return false;
    }
    balance -= amount;
    return true;
}

double Account::getBalance() const {
    return balance;
}

std::string Account::getOwner() const {
    return owner;
}