/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 23:20:39 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 23:24:14 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <exception>
class ParseException : public std::exception
{
	public:
		ParseException(){};
		ParseException(ParseException const &src);
		ParseException & operator=(ParseException const & src);
		/* ~ParseException(void){}; */
		virtual const char * what(void) const throw() ;
};

#endif
