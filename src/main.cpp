#include <iostream>
#include "include/Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "Customer.h"
#include "Bank.h"

int main() {
    Bank bank;

    Customer* customer1 = new Customer("Malcom Otieno");
    Customer* customer2 = new Customer("John Doe");

    Account* checkingAccount = new CheckingAccount("Malcom Otieno", 1000);
    Account* savingsAccount = new SavingsAccount("John Doe", 2000, 0.05);

    customer1->addAccount(checkingAccount);
    customer2->addAccount(savingsAccount);

    bank.addCustomer(customer1);
    bank.addCustomer(customer2);

    for (Customer* customer : bank.getCustomers()) {
        std::cout << "Customer: " << customer->getName() << std::endl;
        for (Account* account : customer->getAccounts()) {
            std::cout << "Account owner: " << account->getOwner() << ", Balance: " << account->getBalance() << std::endl;
        }
    }

    // Clean up
    delete checkingAccount;
    delete savingsAccount;
    delete customer1;
    delete customer2;

    return 0;
}