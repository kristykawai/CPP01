/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawai <kawai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:32:53 by kawai             #+#    #+#             */
/*   Updated: 2024/05/02 14:56:53 by kawai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout<< "Memory address of str:" <<&str << std::endl;
	std::cout<< "Memory address of stringPTR:" <<&stringPTR << std::endl;
	std::cout<< "Memory address of stringREF:" <<&stringREF << std::endl;
	
	std::cout<< "Value of str:" <<str << std::endl;
	std::cout<< "Value of stringPTR:" <<*stringPTR << std::endl;
	std::cout<< "Value of stringREF:" <<stringREF << std::endl;
	
	return(0);
}
