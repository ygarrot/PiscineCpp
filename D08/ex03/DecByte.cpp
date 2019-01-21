/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecByte.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:22:30 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:13:20 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DecByte.hpp"


DecByte::DecByte() 
{

}

DecByte::~DecByte() 
{

}

DecByte::DecByte(DecByte const &src)
{
	*this = src;
}

DecByte     &DecByte::operator=(DecByte const & src) 
{
	(void)src;
	return *this;
}

int	DecByte::execute(void)
{
	--(*this->struc->ptr);
	return 0;
}

DecByte::DecByte(t_openStruct *struc) {
 		this->struc = struc; 
 }
