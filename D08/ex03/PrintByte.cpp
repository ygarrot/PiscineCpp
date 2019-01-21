/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintByte.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:38:42 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 22:58:12 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PrintByte.hpp"


PrintByte::PrintByte() 
{

}

PrintByte::~PrintByte() 
{

}

PrintByte::PrintByte(PrintByte const &src)
{
	*this = src;
}

PrintByte     &PrintByte::operator=(PrintByte const & src) 
{
	(void)src;
	return *this;
}

int	PrintByte::execute(void)
{
	std::cout << (*this->struc->ptr);
	return 0;
}

PrintByte::PrintByte(t_openStruct *struc) {
 		this->struc = struc; 
 }
