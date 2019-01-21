/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:42:14 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:26:25 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " + name + " just popped !" << std::endl;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " + this->_name + " just died for no apparent reason !" << std::endl;
}

std::string Victim::getName(void) const
{
	return this->_name;
}

std::ostream & operator<<(std::ostream & o, Victim const & src)
{
	o << "I'm " +src.getName() + " and I like otters !" << std::endl;
	return o;
}

Victim & Victim::operator=(Victim const & src)
{
	this->_name = src.getName();
	return *this;
}

void Victim::getPolymorphed(void) const 
{
	std::cout << this->getName() + " has been turned into a cute little sheep !" << std::endl;
}
