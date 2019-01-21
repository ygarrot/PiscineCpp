/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecPtr.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:38:42 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:13:20 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DecPtr.hpp"


DecPtr::DecPtr() 
{

}

DecPtr::~DecPtr() 
{

}

DecPtr::DecPtr(DecPtr const &src)
{
	*this = src;
}

DecPtr     &DecPtr::operator=(DecPtr const & src) 
{
	(void)src;
	return *this;
}

int	DecPtr::execute(void)
{
	--(this->struc->ptr);
	return 0;
}

DecPtr::DecPtr(t_openStruct *struc) {
 		this->struc = struc; 
 }
