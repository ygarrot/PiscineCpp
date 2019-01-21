/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 21:54:11 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/17 21:34:50 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <list>
#include <iostream>


class RessourcesNotFoundException : public std::exception
{
	public:
		RessourcesNotFoundException(){};
		RessourcesNotFoundException(RessourcesNotFoundException const &src);
		RessourcesNotFoundException & operator=(RessourcesNotFoundException const & src);
		/* ~RessourcesNotFoundException(void){}; */
		virtual const char * what(void) const throw() ;
};

const char *RessourcesNotFoundException::what(void) const throw()
{
		return ("Couldnt find your value in container");
}

RessourcesNotFoundException::RessourcesNotFoundException(RessourcesNotFoundException const &src)
{
		*this = src;
}

RessourcesNotFoundException & RessourcesNotFoundException::operator=(RessourcesNotFoundException const & src)
{
		(void)src;
			return *this;
}

	template<typename T>
typename T::const_iterator easyfind(T container, int i)
{
	typename T::const_iterator it;

	it = std::find(std::begin(container), std::end(container), i);
	if (it == container.end())
		throw RessourcesNotFoundException(); 
	return it;
}

#endif
