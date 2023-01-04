#include "HumanB.hpp"

HumanB::HumanB(std::string name,Weapon *weapon):name(name),_weapon(weapon){}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack() const
{
	if(this->_weapon)
		std::cout << this->name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		 std::cout << this->name << " attacks" << std::endl;
}