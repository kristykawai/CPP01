/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:29:49 by kchan             #+#    #+#             */
/*   Updated: 2024/05/09 15:39:11 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(const std::string& name): _name(name){};

HumanB::~HumanB()
{
	std::cout << "Human B " << this->_name << " is deleted" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	if(!this->_weapon)
		std::cout << this->_name <<  " attacks with their " << this->_weapon->getType() << "." << std::endl;
	else
		std::cout << this->_name <<  " attacks with their bare hands." << std::endl;
}
