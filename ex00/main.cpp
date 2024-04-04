/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:39:09 by kchan             #+#    #+#             */
/*   Updated: 2024/04/04 16:07:39 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main ()
{
	Zombie zombie;
	
	while(1)
	{
		std::cout << "Enter name of the Zombie:" << std::endl;
		std::string name;
		std::getline(std::cin, name);
		zombie.setName(name);
		zombie.announce();
		
	}
	return(0);
}
