/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 17:32:14 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 20:54:43 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"
#include "Base.hpp"
#include <unistd.h>

void identify_from_reference( Base & p )
{
	try{
		A & x = dynamic_cast<A&>(p);
		(void)x;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{

	}

	try{
		B & x = dynamic_cast<B&>(p);
		(void)x;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{

	}

	try{
		C & x = dynamic_cast<C&>(p);
		(void)x;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{

	}
	return ;
}


void identify_from_pointer( Base * p )
{
	try{
		A & x = dynamic_cast<A&>(*p);
		(void)x;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{

	}

	try{
		B & x = dynamic_cast<B&>(*p);
		(void)x;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{

	}

	try{
		C & x = dynamic_cast<C&>(*p);
		(void)x;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{

	}
	return ;
}

int main(void)
{
	Base base;
	Base *ptr;

	srand (time(NULL));
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Generated:" << std::endl;
		ptr = base.generate();
		std::cout << "From Pointer:" << std::endl;
		identify_from_pointer(ptr);
		std::cout << "From Reference:" << std::endl;
		identify_from_reference(*ptr);
		delete ptr;
		usleep(1400000);
	}
}
