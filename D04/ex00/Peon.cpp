/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:58:36 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:32:33 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	this->_name = "peon";
	return ;
}

Peon::Peon(std::string name) : Victim(name) 
{
	std::cout << "Zog zog." << std::endl; 
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->getName() + " has been turned into a pink pony !" << std::endl;
	return;
}
