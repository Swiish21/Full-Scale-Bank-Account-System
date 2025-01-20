#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Customer.h"

class Bank {
public:
    void addCustomer(Customer* customer);
    std::vector<Customer*> getCustomers() const;

private:
    std::vector<Customer*> customers;
};

#endif // BANK_H