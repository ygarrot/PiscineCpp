/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:15:22 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:08:45 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"


AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _APCost(apcost), _damage(damage) 
{
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

std::string AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_APCost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}


AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
	return ;
}

AWeapon & AWeapon::operator=(AWeapon const & src)
{
	this->_name = src._name;
	this->_damage = src._damage;
	this->_APCost = src._APCost;
	this->_attackOutput = src._attackOutput;
	return *this;
}

AWeapon::AWeapon(void)
{
	return ;
}


