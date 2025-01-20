#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(const std::string& owner, double balance)
    : Account(owner, balance) {}

bool CheckingAccount::withdraw(double amount) {
    // Checking accounts might have an overdraft limit, for simplicity, we assume no overdraft
    return Account::withdraw(amount);
}