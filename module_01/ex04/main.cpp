/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:35:33 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/26 17:12:12 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void other_file(std::string filename, std::ifstream &file, std::string finder, std::string replace)
{
	std::string line;
	std::stringstream strBuff;
	std::ofstream file2((filename + ".replace").c_str());
	if (!file2.is_open())
	{
		std::cerr << "Error: couldn't open output File:" << filename << ".replace" << std::endl;
		file.close();
		return ;
	}
	while (std::getline(file, line))
	{
		if (finder != replace)
		{
			size_t pos = line.find(finder);
			while (pos != std::string::npos)
			{
				line.erase(pos, finder.length());
				line.insert(pos, replace);
				pos = line.find(finder, pos + replace.length());
			}
		}
		file2 << line << std::endl;
	}
	file.close();
	file2.close();
}

int error_check(std::string filename, std::string finder, std::string replace)
{
	std::stringstream strBuff;
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: couldn't open input File:" << filename << std::endl;
		return (1);
	}
	strBuff << file.rdbuf();
	std::string inputFileLines = strBuff.str();
	if (inputFileLines == "")
	{
		std::cout << "file is empty." << std::endl; 
		return (1);
	}
	file.clear(); //clear EOF flag
	file.seekg(0, std::ios::beg); // reset position to the beginning of the file
	other_file(filename, file, finder, replace);
	return (0);
}


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	if (argv[2][0])
		error_check(argv[1], argv[2], argv[3]);
	else
	{
		std::cerr << "Error: Empty finder" << std::endl;
		return (1);
	}
	return (0);
}
