#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	~Zombie();
	Zombie(const std::string& name);
	void setName(const std::string& name);
	std::string getName(void)const;
	void announce(void)const;
};

Zombie* zombieHorde(int N, std::string name);

#endif