/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:47:44 by kchan             #+#    #+#             */
/*   Updated: 2024/04/05 13:21:34 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name(""){}
Zombie::Zombie(const std::string& name) : _name(name){}
Zombie::~Zombie()
{
	std::cout<< _name + " Zombie is deleted." <<  std::endl;
}

void	Zombie::setName(const std::string& name)
{ 
	_name = name;
}

std::string Zombie::getName() const
{
	return _name;
}

void	Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
