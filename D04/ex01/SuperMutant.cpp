/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:54:20 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:36:19 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

void SuperMutant::takeDamage(int value) 
{
	value -= 3;
	this->_hp -= value;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(src)
{
	*this = src;
	return ;
}

/* SuperMutant & SuperMutant::operator=(SuperMutant const & src) */
/* { */
/* 	Enemy=(src); */
/* 	return *this; */
/* } */

