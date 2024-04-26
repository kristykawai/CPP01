/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:39:09 by kchan             #+#    #+#             */
/*   Updated: 2024/04/26 17:46:53 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main ()
{
	Zombie *Zombie_arr;

	Zombie_arr = zombieHorde(10, "kawai");
	for(int i = 0; i < 10; i++)
		Zombie_arr[i].announce();
		delete[] Zombie_arr;
		
	return(0);
}
