/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 18:35:33 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/26 00:04:42 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int file_process(std::string filename,std::string finder, std::string replace)
{
	size_t pos = 0;
	std::string line;
	std::stringstream strBuff;


	if (finder.empty())
	{
		std::cerr << "Error: Empty string" << std::endl;
		return (1);
	}
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Error: couldn't open input File:" << filename << std::endl;
		return (1);
	}
/* 	strBuff << file.rdbuf();
	std::string inputFileLines = strBuff.str();
	if (inputFileLines == "")
	{
		std::cout << "file is empty." << std::endl; 
		return (1);
	} */
	std::ofstream file2(filename + ".replace");
	if (!file2.is_open())
	{
		std::cerr << "Error: couldn't open output File:" << filename << ".replace" << std::endl;
		file.close();
		return (1);
	}
	while (std::getline(file, line))
	{

		if (finder != replace)
		{
			pos = line.find(finder);
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
	return (0);
}


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	file_process(argv[1], argv[2], argv[3]);
	return (0);
}

/* 

void	ft_replace(std::string *lines, std::string str1, std::string str2, size_t pos)
{
		lines->erase(pos, str1.length());
		lines->insert(pos, str2);
}

int	execute_file(int ac, char **av)
{
	std::string fileName = av[1];
	std::string str1 = av[2];
	std::string str2 = av[3];

	std::ifstream inputFile(fileName);
	if (!inputFile.is_open())
	{
		std::cout << "input file can not open." << std::endl; 
		return (1);
	}

	std::stringstream strBuff;
	strBuff << inputFile.rdbuf();
	std::string inputFileLines = strBuff.str();
	
	if (inputFileLines == "")
	{
		std::cout << "file is empty." << std::endl; 
		return (1);
	}
	size_t pos = 0;
	while(str1 != "" && (pos = inputFileLines.find(str1, pos)) != std::string::npos)
	{
		ft_replace(&inputFileLines, str1, str2, pos);
		pos += str2.length();
	}
	inputFile.close();

	std::ofstream outputFile(fileName.append(".replace"));
	if (!outputFile.is_open())
	{
		std::cout << "output file can not open." << std::endl;
		return (1);
	}
	outputFile << inputFileLines;
	outputFile.close();
	return (0);
}

int main(int ac, char **av)
{
	int return_value = 1;
	if (ac == 4)
		return_value = execute_file(ac, av);
	else
	{
		std::cout << "Wrong input, try one more time please." << std::endl;
		std::cout << "Here is a usage: ./programm_name file_name str1 str2" << std::endl;
		return (return_value);
	}
	return (return_value);
}
 */