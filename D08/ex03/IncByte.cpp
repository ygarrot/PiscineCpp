/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncByte.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:38:42 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:13:21 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "IncByte.hpp"


IncByte::IncByte() 
{

}

IncByte::~IncByte() 
{

}

IncByte::IncByte(IncByte const &src)
{
	*this = src;
}

IncByte     &IncByte::operator=(IncByte const & src) 
{
	(void)src;
	return *this;
}

int	IncByte::execute(void)
{
	++(*this->struc->ptr);
	return 0;
}

IncByte::IncByte(t_openStruct *struc) {
 		this->struc = struc; 
 }
