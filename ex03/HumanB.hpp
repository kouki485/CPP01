#ifndef HUMANB_HPP 
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *_weapon;
	HumanB();
public:
	void setWeapon(Weapon &weapon);
	void attack() const;
	HumanB(std::string name,Weapon *weapon = NULL);
	~HumanB();
};

#endif