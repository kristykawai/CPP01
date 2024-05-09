/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:38:14 by kawai             #+#    #+#             */
/*   Updated: 2024/05/09 13:16:40 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

// Constructors
//Default constructor
Weapon::Weapon()
{
	_type = "";
}

//Copy constructor
//access the member function of & reference obj, you use .
//if it is a pointer, use ->
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
//first const & means member function returns a const reference to type
//second cost means the member function is not modifying the object
const std::string &Weapon::getType() const
{
	return (this->_type);
}

void Weapon::setType(const std::string &newType)
{
	_type = newType;
}
