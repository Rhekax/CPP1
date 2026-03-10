#ifndef HUMANA_H
	#define HUMANA_H

#include "Weapon.hpp"
#ifndef STRING_H
	#define STRING_H
	#include <string>
#endif
#ifndef IOSTREAM_H
	#define IOSTREAM_H
	#include <iostream>
#endif




class HumanA {
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(const std::string& n, Weapon& w);

    void attack() const;
};

#endif