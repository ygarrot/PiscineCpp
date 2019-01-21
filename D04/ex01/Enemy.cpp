/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:50:25 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:36:05 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

std::string Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHP() const
{
	return this->_hp;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
	return ;
}

Enemy & Enemy::operator=(Enemy const & src)
{
	this->_hp = src.getHP();
	this->_type = src.getType();
	return *this;
}

Enemy::Enemy(void)
{
	return ;
}

void Enemy::takeDamage(int hp)
{
	this->_hp -= hp;
}
