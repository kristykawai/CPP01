/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:59:44 by kchan             #+#    #+#             */
/*   Updated: 2024/05/03 14:16:44 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon){};

HumanA::~HumanA()
{
	std::cout << "Human A" << this->_name << "is deleted" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->_name <<  " attacks with their " << this->_weapon.getType() << std::endl;
}
