/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:47:44 by kchan             #+#    #+#             */
/*   Updated: 2024/04/26 17:32:28 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*When initializing member variables in the constructor's initializer list,
you don't need to use this->. Because you're not inside a member function scope */
Zombie::Zombie() : _name(""){}
Zombie::Zombie(const std::string& name) : _name(name){}
Zombie::~Zombie()
{
	std::cout<< _name + " Zombie is deleted." <<  std::endl;
}

void	Zombie::setName(const std::string& name)
{ 
	this->_name = name;
}

std::string Zombie::getName() const
{
	return _name;
}

void	Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
