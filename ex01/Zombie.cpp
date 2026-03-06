#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
	:	name(name)
{
}

Zombie::Zombie()
	: name()
{
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->name << " died" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}