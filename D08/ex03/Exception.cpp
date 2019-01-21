/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 23:20:27 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 23:26:39 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"

const char *ParseException::what(void) const throw()
{
	return ("Parsing error :)");
}

ParseException::ParseException(ParseException const &src)
{
	*this = src;
}

ParseException & ParseException::operator=(ParseException const & src)
{
	(void)src;
	return *this;	
}


