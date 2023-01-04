#include "Zombie.hpp"

int main()
{
	Zombie z("main zombie");
	z.announce();
	Zombie *create_zombie = newZombie("new zombie");
	create_zombie->announce();
	randomChump("random zombie");
	delete create_zombie;
}