/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:33:14 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/14 21:44:16 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat *lame;
	Bureaucrat lazy("Lazy", 51);
	Bureaucrat theBoss("TheBoss", 1);
	Form		*badForm;
	Form		*badForm2;
	Form		superForm("superForm", 50, 50);
	PresidentialPardonForm pres("PresidentialPardonForm");
	RobotomyRequestForm robo("RobotomyRequestForm");
	ShrubberyCreationForm shub("ShrubberyCreationForm");

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

	try 
	{
		badForm2 = new Form("badForm2", -42, 42);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout <<"badForm -42: ";
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout <<"badForm -42: ";
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout <<"badForm -42: ";
		std::cout << e.what() << std::endl;
	}

	try 
	{
		badForm = new Form("badForm", 153, 50);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout <<"badForm 153:: ";
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout <<"badForm 153: ";
		std::cout << e.what() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout <<"badForm 153: ";
		std::cout << e.what() << std::endl;
	}

	std::cout << superForm << std::endl;
	lazy.signForm(superForm);
	theBoss.signForm(superForm);
	Bureaucrat notAut("not", 138);

std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	theBoss.executeForm(pres);
	lazy.executeForm(pres);
	theBoss.signForm(pres);
	lazy.signForm(pres);
	theBoss.executeForm(pres);
	lazy.executeForm(pres);

	theBoss.executeForm(robo);
	lazy.executeForm(robo);
	theBoss.signForm(robo);
	lazy.signForm(robo);
	theBoss.executeForm(robo);
	lazy.executeForm(robo);

	theBoss.executeForm(shub);
	lazy.executeForm(shub);
	theBoss.signForm(shub);
	lazy.signForm(shub);
	theBoss.executeForm(shub);
	lazy.executeForm(shub);
}
