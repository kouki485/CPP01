#include "Harl.hpp"

Harl::Harl()
{
	this->func[0] = nothing;
	this->func[1] = debug;
	this->func[2] = info;
	this->func[3] = warning;
	this->func[4] = error;
}
Harl::~Harl(){}

void Harl::complain(std::string level)
{
	this->func [((level == "debug") * 1 + \
			(level == "info") * 2 + \
			(level == "warning") * 3 + \
			(level == "error") * 4)]();
}

void Harl::nothing(void){}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, Harl::I wouldn\'t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

