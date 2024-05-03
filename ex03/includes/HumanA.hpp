/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:23:30 by kchan             #+#    #+#             */
/*   Updated: 2024/05/03 14:09:22 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string		_name;
		Weapon			&_weapon;	
		
	public:	
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA();
		void attack(void);
};

#endif
