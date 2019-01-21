/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:48:37 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 23:40:56 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <fstream>
#include <iostream>
#include "IMindOpen.hpp"

int	exec_instr(IMindOpen* instruction)
{
	int ret = instruction->execute();
	if (!ret)
		instruction->struc->it++;
	/* std::cout << instruction->c << std::endl; */
	return ret;
}
int	parser(std::string file)
{
	t_openStruct *openMap;
	openMap = new openStruct;
	openMap->queue = new std::list<IMindOpen*>; 
	/* "<>+-.,[]" */
	std::ifstream ifs;


	ifs.open(file);
	std::string content( (std::istreambuf_iterator<char>(ifs) ),
			(std::istreambuf_iterator<char>()    ) );
	openMap->map = new unsigned char[32000];
	std::memset(openMap->map, 0, 32000);
	openMap->ptr = openMap->map;
	if (!ifs.is_open())
		return 0;

	fillQueue(openMap, content);
	std::list<IMindOpen*>::iterator it = openMap->queue->begin();
	std::list<IMindOpen*>::iterator  ite = openMap->queue->end();
	while (it != ite)
	{
		openMap->it = it;
		std::find_if(it, ite, exec_instr);
		it = openMap->it;
	}
	delete openMap->map;
	while (!openMap->queue->empty())
	{
			delete openMap->queue->back();
			openMap->queue->pop_back();
	}
	delete openMap->queue;
	return 1;
}

int main(int ac, char **av)
{
	(void)ac;
	if (ac != 2)
	{
		std::cout << "Give me an arg\n";
		return 1;
	}
	try{
		parser(av[1]);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
