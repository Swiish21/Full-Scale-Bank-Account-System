# Bank System

This project is a simple bank system implemented in C++. It includes classes for `Account`, `CheckingAccount`, `SavingsAccount`, `Customer`, and `Bank`.

## Classes

- `Account`: Base class for different types of accounts.
- `CheckingAccount`: Derived class for checking accounts.
- `SavingsAccount`: Derived class for savings accounts with interest.
- `Customer`: Represents a bank customer with multiple accounts.
- `Bank`: Manages multiple customers.

## Build

To build the project, use CMake:

```sh
mkdir build
cd build
cmake ..
make