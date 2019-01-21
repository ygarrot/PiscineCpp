/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 14:43:35 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 19:48:06 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
	size_t start_pos = 0;
	if (from.empty())
		return;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
}

int main(int ac, char **av)
{
	std::ifstream file;
	std::ofstream replaced;
	std::string line;

	if (ac < 4)
	{
		std::cout << "Please give me a file and 2 strings" << std::endl;
		return 0;
	}
	replaced.open((std::string)av[1] + (std::string)".replace", std::ofstream::out);
	file.open(av[1], std::ifstream::in);
	if (replaced.is_open() && file.is_open())
	{
		while (std::getline (file, line))
		{
			replaceAll(line, av[2], av[3]);
			replaced << line << std::endl;
		}
		file.close();
		replaced.close();
	}
	else
		std::cout << "Unable to open file : " << av[1] << std::endl; 
}
