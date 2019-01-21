/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:37:18 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 23:35:33 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy() 
{
	Intern *intern;

	intern = new Intern;
	for (int i = 0; i < 20; i++)
	{
		std::memset(&this->_office[i], 0, sizeof(OfficeBlock));
		this->_office[i].setIntern(intern);
		std::memset(&this->_target[0], 0, 20);
	}
}

const char *CentralBureaucracy::FullOfficeException::what(void) const throw()
{
	return ("Office is full go back home");
}

CentralBureaucracy::FullOfficeException::FullOfficeException(CentralBureaucracy::FullOfficeException const &src)
{
	*this = src;
}

CentralBureaucracy::FullOfficeException & CentralBureaucracy::FullOfficeException::operator=(CentralBureaucracy::FullOfficeException const & src)
{
	(void)src;
	return *this;	
}

CentralBureaucracy::~CentralBureaucracy() 
{
	delete this->_office[0].getIntern();
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &src)
{
	*this = src;
}

CentralBureaucracy     &CentralBureaucracy::operator=(CentralBureaucracy const & src) 
{
	(void)src;
	return *this;
}

void CentralBureaucracy::queueUp(std::string const & target)
{
	this->_target[this->_lastTarget%20] = target;
	++this->_lastTarget;
}

void	CentralBureaucracy::doBureaucracy(void)
{
	std::string form[3] = {"Presidential Pardon",
		"Shrubbery Creation", "Robotomy Request"};
	for(int i =0; i < 20; i++)
	{
		try
		{
			this->_office[i].doBureaucracy(form[rand()%2], this->_target[i]); 
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

void	CentralBureaucracy::feed(Bureaucrat & bureaucrat)
{
	for (int i = 0; i < 20; i++)
	{
		if (!this->_office[i].getSigner())
		{
			this->_office[i].setSigner(&bureaucrat);
			return;
		}
		if(!this->_office[i].getExecutor())
		{
			this->_office[i].setExecutor(&bureaucrat);
			return;
		}
	}
	throw FullOfficeException();
}
