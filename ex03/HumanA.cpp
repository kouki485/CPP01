#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &weapon):name(name),_weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack() const
{
	std::cout << this->name << "attacks with their" << this->_weapon.getType() << std::endl;
}
