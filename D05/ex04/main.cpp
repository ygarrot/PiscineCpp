/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:33:01 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 19:03:50 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;

	try
	{
		ob.doBureaucracy("Robotomy Request", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setIntern(idiotOne);
	try
	{
		ob.doBureaucracy("Robotomy Request", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setSigner(bob);
	try
	{
		ob.doBureaucracy("Robotomy Request", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setExecutor(hermes);

	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		ob.doBureaucracy("Presidential Pardon", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		ob.doBureaucracy("Shrubbery Creation", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	ob.setSigner(hermes);
	try
	{
		ob.doBureaucracy("Robotomy Request", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}
