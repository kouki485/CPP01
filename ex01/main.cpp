#include "Zombie.hpp"

int main()
{
	int i = 42;
	Zombie *p = zombieHorde(i,"42zombie");
	for(int k =  0; k < i; k++)
		p[k].announce();
	delete []p;
	system("leaks -q zombie");
	return 0;
}