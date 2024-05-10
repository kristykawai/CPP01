/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawai <kawai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:58:10 by kchan             #+#    #+#             */
/*   Updated: 2024/05/10 17:53:58 by kawai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Utils.hpp"

std::ifstream readFile(const std::string &file)
{
	std::ifstream	inFile;

	inFile.open(file, std::ios::in);
	if (!inFile.is_open())
	{
		std::cout << "Error: failed to open input file" << std::endl;
		exit(EXIT_FAILURE);
	}
	return (inFile);
}

std::ofstream createProcessedFile(std::ifstream &inFile, std::string &outFileName)
{
	std::ofstream	outFile;
		
	outFile.open(outFileName, std::ios::out);
	if (!outFile.is_open())
	{
		std::cerr << "Error: The output file could not be opened" << std::endl;
		inFile.close();
		exit(EXIT_FAILURE);
	}
	return (outFile);
}

std::string &strReplace(std::string &line, std::string &findStr,std::string &replaceWith)
{
	std::size_t	index;
	
	index = 0;
	index = line.find(findStr);
	while(index <= line.length())
	{
		line.erase(index, findStr.length());
		line.insert(index, replaceWith);
		index = line.find(findStr);
	}
	return(line);
}

// substr (pos) -> means get from "pos" to the end
void replace(const std::string file, std::string findStr, std::string replaceWith)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		outFileName;
	std::size_t		lastDotIndex;
	std::string		line;

	
	inFile = readFile(file);
	lastDotIndex = file.find_last_of('.');
    outFileName = file.substr(0, lastDotIndex) + "_processed" + file.substr(lastDotIndex);
	outFile = createProcessedFile(inFile, outFileName);
	while(getline(inFile, line))
	{
		strReplace(line, findStr, replaceWith);
		outFile << line;
		if(!inFile.eof())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
}

int main (int argc, char **argv)
{	
	if(argc == 4)
	{
		replace(argv[1], argv[2], argv[3]);
	}
	else
	{
		std::cout << "Usage: ./replace [infile] [string to find] [replace with]" << std::endl;
		return (EXIT_FAILURE);
	}
	return(0);
}
