/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawai <kawai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:57 by kchan             #+#    #+#             */
/*   Updated: 2024/05/17 17:04:00 by kawai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int find_level(char* &message)
{
	if(strcmp(message, "DEBUG") == 0)
		return(0);
	else if(strcmp(message, "INFO") == 0)
		return (1);
	else if(strcmp(message, "WARNING") == 0)
		return (2);
	else if(strcmp(message, "ERROR") == 0)
		return (3);
	else
		return (-1);
}

//switch accept number only, if you don't add break, if will fall through the next level
int main(int ac, char **argv)
{
	Harl harl;
	int level;

	level = 0;
	if (ac == 2)
	{
		level = find_level(argv[1]);
		switch (level)
		{
			case 0:
				harl.complain("DEBUG");
			case 1:
				harl.complain("INFO");
			case 2:
				harl.complain("WARNING");
			case 3:
				harl.complain("ERROR");
				break;
			default:
				std::cout<<"[ TRIVIA ]" << std::endl;
				break;
		}
	}
	else
	{
		std::cout<< "./harlFilter [DEBUG/INFO/WARNING/ERROR]"<<std::endl;
	}
	return(0);
}