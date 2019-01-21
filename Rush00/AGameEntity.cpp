/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameEntity.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:57:55 by jdavin            #+#    #+#             */
/*   Updated: 2019/01/13 21:56:46 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AGameEntity.hpp"

AGameEntity::AGameEntity() : _type("None"){
	this->_color = COLOR_WHITE;
}

AGameEntity::~AGameEntity(void) { 
}

AGameEntity::AGameEntity(AGameEntity const &src) {
	*this = src;
}

AGameEntity     &AGameEntity::operator=(AGameEntity const & src){
	this->_color = src._color;
	this->_speed = src._speed;
	this->_position = src._position;
	/* this->_hitbox = src._hitbox; */
	return *this;
}

int		    AGameEntity::move(char ***map, t_pos limit, Dashboard *board) {
	(void)map;
	(void)board;
	(void)limit;
	return 0;
}

t_pos		    AGameEntity::getPos() const {
	return this->_position;
}

int             AGameEntity::getColor() const {
	return this->_color;
}

void	AGameEntity::displayInfo(WINDOW *info)
{
	mvwprintw(info, 1, (COLS *4) /5, "x:%d, y:%d", this->_position.x, this->_position.y);  
}

void	AGameEntity::deleteFromMap(char ***map, t_pos pos) const
{
	int x;

	while (pos.y-- >= 0)
		for (x = pos.x; x >= 0; x--)
		{
			(*map)[this->_position.y - pos.y][this->_position.x - x] = 0;
		}
}

int	AGameEntity::getIntoMap(char ***map, t_pos limit, Dashboard *board) const
{
	int y, x;
	t_pos tmp;
	AGameEntity *collided;

	for (y = 0 ; y < this->_hitboxSize[Y]; y++)
	{
		for ( x = 0 ; x < this->_hitboxSize[X]; x++)
		{
			if (this->_hitbox[x][y])
			{
				tmp.x = this->_position.x + x;
				tmp.y = this->_position.y + y;
				if (tmp.x > 0 && tmp.x < limit.x
						&& tmp.y >0 && tmp.y < limit.y)
				{
					if ((*map)[tmp.y][tmp.x])
					{
						if ((collided = board->getEntity(getFromPosition, (void*)&tmp)) && collided != this)
						{
							collided->deleteFromMap(map, (t_pos){collided->_hitboxSize[X], collided->_hitboxSize[Y]});
							board->deleteEntity(collided);
						}
						this->deleteFromMap(map, (t_pos){x, y});
						return 0;
					}
					(*map)[tmp.y][tmp.x] = this->_hitbox[x][y]; 
				}
			}
		}
	}
	return 1;
}
