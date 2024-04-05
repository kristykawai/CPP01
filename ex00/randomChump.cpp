/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:50:43 by kchan             #+#    #+#             */
/*   Updated: 2024/04/05 13:15:12 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//new is a function to dynamically allocate the memory
// heapZombie is a pointer to a Zombie object, '->' to access members of an obj
Zombie* newZombie(std::string name)
{
	Zombie* heapZombie;

	heapZombie = new Zombie(name);
	heapZombie->setName(name); 
	return(heapZombie);
}