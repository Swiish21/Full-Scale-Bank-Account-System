cmake_minimum_required(VERSION 3.10)

# Set the project name
project(BankSystem)

# Add the executable
add_executable(BankSystem
    src/main.cpp
    src/Account.cpp
    src/CheckingAccount.cpp
    src/SavingsAccount.cpp
    Customer.cpp
)

# Include directories
target_include_directories(BankSystem PRIVATE include)