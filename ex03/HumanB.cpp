#include "HumanB.hpp"

HumanB::HumanB(const std::string& n) : name(n), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& w) {
    weapon = &w;
}

void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " has no weapon to attack!" << std::endl;
    }
}