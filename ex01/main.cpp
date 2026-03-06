#include "Zombie.hpp"


int main(void) {
    Zombie* horde4 = zombieHorde(4, "4");
    Zombie* horde3 = zombieHorde(3, "3");
    Zombie* horde2 = zombieHorde(2, "2");
    Zombie* horde1 = zombieHorde(1, "1");

    for(int i = 0; i < 4; i++)
        horde4[i].announce();
    for (int i = 0; i < 3; i++)
        horde3[0].announce();
    for (int i = 0; i < 2; i++)
        horde2[0].announce();
    for (int i = 0; i < 1; i++)
        horde1[0].announce();

    delete[] horde1;
    delete[] horde2;
    delete[] horde3;
    delete[] horde4;
    return 0;
}
