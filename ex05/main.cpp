#include "Harl.hpp"

int main(int ac,char **av)
{
	Harl h;

	if(ac == 2)
		h.complain(av[1]);
	return 0;
}