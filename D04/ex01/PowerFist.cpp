
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:52:20 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 14:33:39 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	this->_attackOutput = "* pschhh... SBAM! *";
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

void PowerFist::attack() const
{
	std::cout << this->_attackOutput << std::endl;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src)
{
	*this = src;
	return ;
}

/* PowerFist & PowerFist::operator=(PowerFist const & src) */
/* { */
/* 	return *this; */
/* } */

