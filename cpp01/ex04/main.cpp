/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:36:40 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:36:43 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stringUtils.hpp"
#include <string>
#include <iostream>
#include <fstream>

std::string		replace(std::string line, std::string str, std::string rpl)
{
	int	pos = line.find(str);
	while (pos != (int)std::string::npos)
	{
		line.erase(pos, str.size());
		line.insert(pos, rpl);
		pos = line.find(str, (pos + str.size()));
	}
	return (line);
}

int	main(int ac, char **av)
{
	std::ifstream			file(av[1]);
	std::string				line;

	std::string				oldFileName;
	std::string				newFileName;

	if (ac != 4)
	{
		std::cout << std::endl << "arguments number not conform\nusage : ./ft_sed file1 string1 string2" << std::endl;
		return 1;
	}
	oldFileName = av[1];
	newFileName = oldFileName + ".replace";
	std::ofstream	newFile(newFileName);

	while(getline(file, line))
	{
		line = replace(line, av[2], av[3]);
		newFile << line;
		newFile << std::endl;
	}
}
