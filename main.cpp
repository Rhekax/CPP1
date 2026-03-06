#include "Zombie.hpp"
#include <iostream>


int main(void) {
    Zombie* mike = newZombie("MIKE");
    if (!mike) {
        std::cout << "Could not allocate zombie mike" << std::endl;
        return 1;
    }

    mike->announce();
    randomChump("CHUMP");

    delete mike;
    return 0;
}
