/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:39:09 by kchan             #+#    #+#             */
/*   Updated: 2024/04/05 13:19:53 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main ()
{
	Zombie *heapZombie;

	heapZombie = newZombie("Heap");
	heapZombie->announce();
	randomChump("Stack");
	delete heapZombie;
	return(0);
}
