#ifndef WEAPON_H
	#define WEAPON_H

#include <string>
#include <iostream>

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& t);
    const std::string& getType() const;
    void setType(const std::string& newType);
};

#endif