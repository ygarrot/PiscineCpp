/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:43:43 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 20:14:41 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Projectile.hpp"

Projectile::Projectile() : _direction((t_pos){.y=0, .x=1})

{
	this->_hitboxSize[Y]=1;
	this->_hitboxSize[X]=1;
	this->_hitbox[0][0] = '-';
	this->_position.x = 0;
	this->_position.y = 0;
}

Projectile::Projectile(t_pos origin) : _direction((t_pos){.y=0, .x=1})
{
	this->_hitboxSize[Y]=1;
	this->_hitboxSize[X]=1;
	this->_hitbox[0][0] = '-';
	this->_position.x = origin.x;
	this->_position.y = origin.y;
}

Projectile::Projectile(t_pos origin, t_pos direction) : _direction((t_pos){.x=direction.x, .y=direction.y}){
	this->_hitboxSize[Y]=1;
	this->_hitboxSize[X]=1;
	this->_hitbox[0][0] = '-';
	this->_position.x = origin.x;
	this->_position.y = origin.y;
}

Projectile::~Projectile() {
}

Projectile::Projectile(Projectile const &src) {
	*this = src;
}

Projectile     &Projectile::operator=(Projectile const & src){
	(void)src;
	return *this;
}

void             Projectile::setDirection(t_pos newDirection) 
{
	this->_direction.x = newDirection.x;
	this->_direction.y = newDirection.y;
	return;
}

t_pos             Projectile::getDirection() const 
{
	return this->_direction;
}

int	Projectile::move(char ***map, t_pos limit, Dashboard *board)
{
	this->_position.x += this->_direction.x;
	this->_position.y += this->_direction.y;
	return this->getIntoMap(map, limit, board);
}
