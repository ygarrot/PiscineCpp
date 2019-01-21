/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 22:03:49 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/17 21:30:41 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main(void)
{
	std::list<int>		lst;
	std::vector<int> vect(3, 10); 
	/* int n2 = 5; */
	lst.push_back(1);
	lst.push_back(36);
	lst.push_back(2);
	lst.push_back(42);

	try 
	{
		easyfind< std::vector<int> >(vect, 42);
		std::cout << "found 42" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		easyfind< std::vector<int> >(vect, 10);
		std::cout << "found 10" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		easyfind< std::list<int> >(lst, 10);
		std::cout << "found 10" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try 
	{
		easyfind< std::list<int> >(lst, 42);
		std::cout << "found 42" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
