/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:25:51 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 11:21:48 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	catin()
{
	std::string tmp;
	while (true)
	{
		std::cin >> tmp;
		std::cout << tmp << std::endl;
	}
}

void	cat(std::string filename)
{
	std::ifstream in;
	std::string line;

	if (!filename.compare("-"))
	{
		catin();
		return;
	}
	in.open(filename);
	if (!in.is_open())
	{
		std::cout << "Error With " << filename << std::endl;
		return ;
	}
	while (std::getline(in, line))
		std::cout << line << std::endl;
	in.close();
}


int		main(int ac, char **av)
{
	std::string tmp;

	if (ac < 2)
		catin();
	for (int i = 1; i < ac; i++)
		cat(av[i]);
}
