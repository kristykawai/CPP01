/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawai <kawai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:38:14 by kawai             #+#    #+#             */
/*   Updated: 2024/05/02 16:02:38 by kawai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructors
//Default constructor
Weapon::Weapon()
{
	_type = "";
}

//Copy constructor
Weapon::Weapon(const Weapon &copy)
{
	_type = copy.getType();
}

//Fields constructor
Weapon::Weapon(std::string type)
{
	_type = type;
}

// Destructor
Weapon::~Weapon()
{
	std::cout << "Weapon is deleted" << std::endl;
}


// Operators
Weapon & Weapon::operator=(const Weapon &assign)
{
	_type = assign.getType();
	return *this;
}
 

// Getters / Setters
const std::string Weapon::getType() const
{
	return _type;
}
