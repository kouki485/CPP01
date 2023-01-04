#include "file.hpp"

int main(int ac,char **av)
{
	if (ac != 4)
	{
		std::cerr << "arg error." << std::endl;
		exit(0);
	}
	std::string str,s0,s1,s2;
	s0 = av[1];
	s1 = av[2];
	s2 = av[3];

	if(!s0.length() || !s1.length() || !s2.length())
	{
		std::cerr << "error." << std::endl;
		std::exit(1);
	}
	try
	{
		std::ifstream ifs(av[1]);
		if (!ifs)
		{
			std::cerr << "file can not open." << std::endl;
			std::exit(0);
		}
		std::ofstream ofs(std::strcat(av[1],".replace"),std::ios_base::out);
			while(getline(ifs,str))
			{
				size_t pos = 0;
				while(42)
				{
					pos = str.find(s1,pos);
					if (pos == std::string::npos)
						break;
					str.erase(pos,s1.length());
					str.insert(pos, s2);
					pos += s2.length();
				}
				ofs << str;
				if(ifs.eof())
					break;
				ofs << std::endl;
			}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}