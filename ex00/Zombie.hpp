#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie() : name(""){};
	Zombie(const std::string& zname)
	{
		name = zname;
	};

	void setName(const std::string& zname){name = zname;}

	std::string getName() const {return name;}
	void announce()const {std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
};

#endif