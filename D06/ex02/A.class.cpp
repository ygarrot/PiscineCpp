/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.class.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Areated: 2019/01/16 17:39:24 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 18:11:00 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "A.class.hpp"

A::A() 
{

}

A::~A() 
{

}

A::A(A const &src)
{
	*this = src;
}

A     &A::operator=(A const & src) 
{
	(void)src;
	return *this;
}

