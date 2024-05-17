/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawai <kawai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:54 by kchan             #+#    #+#             */
/*   Updated: 2024/05/17 16:30:56 by kawai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl()
{
	mood[0].level = "DEBUG";
	mood[0].ptr_function = &Harl::debug;
	mood[1].level = "INFO";
	mood[1].ptr_function = &Harl::info;
	mood[2].level = "WARNING";
	mood[2].ptr_function = &Harl::warning;
	mood[3].level = "ERROR";
	mood[3].ptr_function = &Harl::error;
}

Harl::~Harl()
{
	// std::cout<< "Harl is deleted." << std::endl;
}

void Harl::debug(void)
{
	std::cout<< "[ DEBUG ]\nSyntax issue" << std::endl;
}
void Harl::info(void)
{
	std::cout<< "[ INFO ]\nIt contains space and alphabets" << std::endl;
}
void Harl::warning(void)
{
	std::cout<<"[ WARNING ]\nSome softwares maynot be able to parse variable name with space correctly" << std::endl;
}
void Harl::error(void)
{
	std::cout<<"[ ERROR ]\nSpace is not accecpted for this program " << std::endl;
}


// Calling the member function on an object
// a pointer-to-member-function result = (object. *pointer_name)(arguments);
// call with a pointer to the object result = (object_ptr->*pointer_name)(arguments);

void Harl::complain(std::string level)
{
	for(int i = 0; i < 4; ++i)
	{
		if(this->mood[i].level == level)
			{
				(this->*mood[i].ptr_function)();
				return;
			}
	}
	std::cerr << "Invalaid level input. Allowed input: DEBUG, INFO, WARNING, ERROR" <<std::endl;
}

