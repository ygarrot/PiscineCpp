/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EndLoop.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:34:46 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 23:09:01 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "EndLoop.hpp"


EndLoop::EndLoop() 
{

}

EndLoop::~EndLoop() 
{

}

EndLoop::EndLoop(EndLoop const &src)
{
	*this = src;
}

EndLoop     &EndLoop::operator=(EndLoop const & src) 
{
	(void)src;
	return *this;
}

int	EndLoop::execute(void)
{
	this->struc->it = 
		std::find(this->struc->queue->begin(), this->struc->queue->end(), this->begin);
	return 1;
}

EndLoop::EndLoop(t_openStruct *struc) {
 		this->struc = struc; 
 }
