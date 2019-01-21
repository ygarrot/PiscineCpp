/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:33:14 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 21:07:28 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int	main(void)
{
	Bureaucrat *lame;
	Bureaucrat lazy("Lazy", 42);


	std::cout << lazy << std::endl;
	try 
	{
		lame = new Bureaucrat("Lame", 153);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout <<"Lame Bureaucrat 153: ";
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout <<"Lame Bureaucrat 153: ";
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout <<"Lame Bureaucrat 153: ";
		std::cout << e.what() << std::endl;
	}

	try 
	{
		lame = new Bureaucrat("Lame", -42);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout <<"Lame Bureaucrat -42: ";
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout <<"Lame Bureaucrat -42: ";
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout <<"Lame Bureaucrat -42: ";
		std::cout << e.what() << std::endl;
	}

	std::cout << lazy.getGrade() << std::endl;
	try{

	lazy.increaseGrade(150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << lazy.getGrade() << std::endl;

try{

	lazy.decreaseGrade(150);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << lazy.getGrade() << std::endl;

}
