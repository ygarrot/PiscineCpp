/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.class.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Breated: 2019/01/16 17:39:24 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 18:02:41 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "B.class.hpp"

B::B() 
{

}

B::~B() 
{

}

B::B(B const &src)
{
	*this = src;
}

B     &B::operator=(B const & src) 
{
	(void)src;
	return *this;
}

