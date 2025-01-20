#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(const std::string& owner, double balance, double interestRate)
    : Account(owner, balance), interestRate(interestRate) {}

void SavingsAccount::applyInterest() {
    balance += balance * interestRate;
}