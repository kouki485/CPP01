#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl
{
private:
	void(*func[5]) (void);
	static	void nothing(void);
	static void	debug(void);
	static void	info(void);
	static void	warning(void);
	static void	error(void);
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif