#include <iostream>
#include "user.h"

int main() {
    // Création des objets User
    User user1("Alice", 25);
    User user2("Bob", 30);

    // Utilisation des méthodes
    user1.displayInfo();
    user1.greet();

    user2.displayInfo();
    user2.greet();

    return 0;
}
