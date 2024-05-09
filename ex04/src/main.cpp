/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:58:10 by kchan             #+#    #+#             */
/*   Updated: 2024/05/09 16:26:21 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Utils.hpp"

void replace(std::string file, std::string findStr, std::string replaceWith)
{
	// std::ifstream	infile;
	// std::ofstream	outfile;
	
	// infile.open(file, std::ios::in);
	std::cout << "file to replace: " << file << "\nsting to replace: " << findStr << "\nreplace with: " << replaceWith <<std::endl;

}

int main (int argc, char **argv)
{	
	if(argc == 4)
	{
		replace(argv[1], argv[2], argv[3]);
	}
	else
	{
		std::cout << "please follow this input pattern: ./replace [infile] [string to find] [replace with]" << std::endl;
	}
	return(0);
}