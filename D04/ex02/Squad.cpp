/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:45:21 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 22:52:47 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::~Squad(void)
{
	t_list *marine;
	t_list *next;

	for ( marine = this->_head ; marine ; marine = next)
		{
			next = marine->next;
			delete marine->marine; 
			delete marine; 
		}
}

ISpaceMarine *Squad::getUnit(int value) const
{
	t_list *unit;
	int index;

	for (unit = this->_head, index = 0 ; unit && index != value; unit = unit->next, index++)
		;
	return unit ? unit->marine : NULL;
}

int	Squad::push(ISpaceMarine *marine)
{
	t_list *block = new t_list;

	if (!marine)
		return this->_unitNbr;
	block->marine = marine;
	block->next = NULL;
	if (!this->_head)
		this->_head = block; 
	if (!this->_tail)
		this->_tail = block;
	else
	{
		this->_tail->next = block;
		this->_tail = block;
	}
	return ++this->_unitNbr;
}

int Squad::getCount() const
{
	return this->_unitNbr;
}


Squad::Squad(Squad const &src)
{
	*this = src;
	return ;
}

Squad & Squad::operator=(Squad const & src)
{
	this->_head = src._head;
	this->_tail = src._tail;
	this->_unitNbr = src._unitNbr;
	return *this;
}

Squad::Squad(void) : _unitNbr(0), _head(0), _tail(0)
{
	return ;
}

