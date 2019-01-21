/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BeginLoop.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:31:44 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 23:08:59 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BeginLoop.hpp"

BeginLoop::BeginLoop() 
{

}

BeginLoop::~BeginLoop() 
{

}

BeginLoop::BeginLoop(BeginLoop const &src)
{
	*this = src;
}

BeginLoop     &BeginLoop::operator=(BeginLoop const & src) 
{
	(void)src;
	return *this;
}

int	BeginLoop::execute(void)
{
	if (!*this->struc->ptr)
	{
			this->struc->it = 
		std::find(this->struc->queue->begin(), this->struc->queue->end(), this->end);
		this->struc->it++;
		return 1;
	}
	return 0;
}

BeginLoop::BeginLoop(t_openStruct *struc)
{
	this->struc = struc;
}
