/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:05:54 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:36:05 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

void RadScorpion::takeDamage(int value)
{
	this->_hp -= value;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src)
{
	*this = src;
	return ;
}

/* RadScorpion & RadScorpion::operator=(RadScorpion const & src) */
/* { */
/* 	return *this; */
/* } */

