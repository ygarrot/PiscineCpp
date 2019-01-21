/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:56:26 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 20:01:22 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

std::string Brain::identify(void)
{
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;  
	return (ss.str()); 
}

Brain::Brain(void)
{
	this->address = this;
}

