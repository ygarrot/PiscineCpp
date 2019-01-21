/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:52:20 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:30:19 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
	this->_attackOutput = "* piouuu piouuu piouuu *";
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

void PlasmaRifle::attack() const
{
	std::cout << this->_attackOutput << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src)
{
	*this = src;
	return ;
}

/* PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & src) */
/* { */
/* 	return *this; */
/* } */

