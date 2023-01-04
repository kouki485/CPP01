#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Zombie
{
private:
	std::string name;
public:
	void setname(std::string name);
	void announce(void);
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif