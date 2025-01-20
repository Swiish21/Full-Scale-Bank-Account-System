cmake_minimum_required(VERSION 3.10)

# Set the project name
project(BankSystem)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set build type (default to Debug)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# Specify the source files
set(SOURCES
    src/main.cpp
    src/Account.cpp
    src/CheckingAccount.cpp
    src/SavingsAccount.cpp
    src/Customer.cpp
)

# Add the executable
add_executable(BankSystem ${SOURCES})

# Include directories
target_include_directories(BankSystem PRIVATE include)

# Specify output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Install the executable
install(TARGETS BankSystem DESTINATION bin)
