/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:26:23 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:33:04 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : _name("Sorcerer"), _title("Sorcerer")
{
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name + ", " + title + ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name + ", " + this->_title + ", is dead. Consequences will never be the same !" << std::endl;
}


std::string Sorcerer::getTitle(void) const
{
	return this->_title;
}

std::string Sorcerer::getName(void) const
{
	return this->_name;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & src)
{
	o << "I am " +src.getName() + ", " + src.getTitle() + ", and I like ponies !" <<std::endl;
	return o;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & src)
{
	this->_name = src.getName();
	this->_title = src.getTitle();
	return *this;
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}
