/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InsertByte.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:38:42 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:13:22 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "InsertByte.hpp"


InsertByte::InsertByte() 
{

}

InsertByte::~InsertByte() 
{

}

InsertByte::InsertByte(InsertByte const &src)
{
	*this = src;
}

InsertByte     &InsertByte::operator=(InsertByte const & src) 
{
	(void)src;
	return *this;
}

int	InsertByte::execute(void)
{
	(*this->struc->ptr) = getchar();  
	return 0;
}

InsertByte::InsertByte(t_openStruct *struc) {
 		this->struc = struc; 
 }
