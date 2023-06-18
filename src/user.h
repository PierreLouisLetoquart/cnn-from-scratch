#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& name, int age);

    void displayInfo() const;
    virtual void greet() const;

protected:
    std::string name;
    int age;
};

#endif  // USER_H
