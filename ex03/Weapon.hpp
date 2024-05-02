/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawai <kawai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:03:09 by kawai             #+#    #+#             */
/*   Updated: 2024/05/02 15:48:51 by kawai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string _type;
		
	public:
		// Constructors
		Weapon();
		Weapon(const Weapon &copy);
		Weapon(std::string type);
		// Deconstructor
		~Weapon();
		
		// Operators
		Weapon & operator=(const Weapon &assign);
		
		// Getters / Setters
		const std::string getType() const;
		void setType(const std::string &newType){_type = newType;}
};

#endif
