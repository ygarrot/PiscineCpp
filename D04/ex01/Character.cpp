/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:08:52 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:37:48 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(0)
{
	return ;
}

Character::~Character(void)
{
	return ;
}

std::string Character::getName() const
{
	return this->_name;
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
	return ;
}

AWeapon *Character::getWeapon() const
{
	return this->_weapon;
}

int Character::getAP() const
{
	return this->_ap;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character & Character::operator=(Character const & src)
{
	this->_name = src._name;
	this->_ap = src._ap;
	this->_weapon = src._weapon;
	return *this;
}

Character::Character(void)
{
	return ;
}

void Character::attack(Enemy* enemy)
{
	int new_ap;
	
	new_ap = this->_ap - this->_weapon->getAPCost();
	if (new_ap < 0 || !this->_weapon)
		return ;
	this->_ap = new_ap;
	std::cout << "NAME attacks " + enemy->getType() +
		" with a " + this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
	return ;
}

std::ostream & operator<<(std::ostream  & o, Character const & src)
{
	o << src.getName() + " has " <<src.getAP() << " AP and " + 
		(src.getWeapon() ? ("wields a " + src.getWeapon()->getName())
		: "is unarmed")
		<< std::endl;
	return o;
}

