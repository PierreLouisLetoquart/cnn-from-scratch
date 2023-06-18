#include <iostream>
#include "user.h"

User::User(const std::string& name, int age) : name(name), age(age) {}

void User::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

void User::greet() const {
    std::cout << "Hello, I am " << name << std::endl;
}
