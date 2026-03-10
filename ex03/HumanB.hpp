#ifndef HUMANB_H
	#define	HUMANB_H

	#include "Weapon.hpp"

#ifndef STRING_H
	#define STRING_H
	#include <string>
#endif
#ifndef IOSTREAM_H
	#define IOSTREAM_H
	#include <iostream>
#endif



	class HumanB {
	private:
	    std::string name;
	    Weapon* weapon;

	public:
	    HumanB(const std::string& n);

	    void setWeapon(Weapon& w);

	    void attack() const;
	};


#endif