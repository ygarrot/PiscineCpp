/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:54:00 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/17 16:31:33 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>

int main()
{
	Span sp = Span(10000);
	Span sp2 = Span(1000);
	std::vector<int> vect(1000, 10); 
	std::vector<int> vect2(10000, 10); 

	for (int i = 0; i < 15000 ; i++)
	{
		std::cout << "index: " << i << std::endl;
		try {
			sp.addNumber(rand());
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
			break ;
		}
		
		try {
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	try{
		sp2.mergeContainer< std::vector<int> >(vect.begin(), vect.end());
		std::cout << "container merged" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try{
		sp2.mergeContainer< std::vector<int> >(vect2.begin(), vect2.end());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
