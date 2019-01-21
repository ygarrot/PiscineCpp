/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:36:53 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 22:49:22 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CENTRALBUREAUCRACY_HPP
#define CENTRALBUREAUCRACY_HPP

#include <iostream>
#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include <exception>

class 					CentralBureaucracy
{
	public:
		~CentralBureaucracy(void);
		CentralBureaucracy(void);
		CentralBureaucracy(CentralBureaucracy const &src);
		CentralBureaucracy 		&operator=(CentralBureaucracy const & src);
		void queueUp(std::string const & target);
		void	doBureaucracy(void);
		void	feed(Bureaucrat &Bureaucrat);
		class FullOfficeException : public std::exception
	{
		public:
			FullOfficeException(void){};
			FullOfficeException(FullOfficeException const &src);
			/* ~FullOfficeException(void){}; */
			FullOfficeException & operator=(FullOfficeException const & src);
			virtual const char * what(void) const throw() ;
	};

	private:
		OfficeBlock _office[20];
		std::string _target[20];
		int		_lastTarget;
};
/* std::ostream 		&operator<<(std::ostream & o, CentralBureaucracy const & src); */

#endif
