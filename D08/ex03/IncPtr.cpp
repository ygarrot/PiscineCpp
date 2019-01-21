/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncPtr.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:24:58 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:13:22 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "IncPtr.hpp"


IncPtr::IncPtr() 
{

}

IncPtr::~IncPtr() 
{

}

IncPtr::IncPtr(IncPtr const &src)
{
	*this = src;
}

IncPtr     &IncPtr::operator=(IncPtr const & src) 
{
	(void)src;
	return *this;
}

int	IncPtr::execute(void)
{
	++(this->struc->ptr);
	return 0;
}

IncPtr::IncPtr(t_openStruct *struc) {
 		this->struc = struc; 
 }
