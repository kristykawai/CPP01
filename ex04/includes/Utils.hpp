#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <fstream>

std::ifstream readFile(const std::string &file);
std::ofstream createProcessedFile(std::ifstream &inFile, std::string &outFileName);
std::string &strReplace(std::string &line, std::string &findStr,std::string &replaceWith);
void replace(const std::string file, std::string findStr, std::string replaceWith);

#endif