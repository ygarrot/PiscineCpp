/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:01:24 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 23:34:20 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

class 					OfficeBlock
{
	public:
		OfficeBlock(void);
		~OfficeBlock(void);
		OfficeBlock(Intern & intern, Bureaucrat & sign, Bureaucrat & executor);

		void	setIntern(Intern * intern);
		void	setExecutor(Bureaucrat * executor);
		void	setSigner(Bureaucrat * signingOne);

		void doBureaucracy(std::string formName, std::string targetName) const;
		Intern	* getIntern(void) const;
		Bureaucrat	* getExecutor(void) const;
		Bureaucrat	* getSigner(void) const;

		class BadFormException : public std::exception
	{
		public:
			BadFormException(){};
			BadFormException(BadFormException const &src);
			BadFormException & operator=(BadFormException const & src);
			/* ~BadFormException(void){}; */
			virtual const char * what(void) const throw() ;
	};

		class NoInternException : public std::exception
	{
		public:
			NoInternException(){};
			NoInternException(NoInternException const &src);
			NoInternException & operator=(NoInternException const & src);
			/* ~NoInternException(void){}; */
			virtual const char * what(void) const throw() ;
	};

		class NoSignerException : public std::exception
	{
		public:
			NoSignerException(){};
			NoSignerException(NoSignerException const &src);
			NoSignerException & operator=(NoSignerException const & src);
			/* ~NoSignerException(void){}; */
			virtual const char * what(void) const throw() ;
	};

		class NoExecutorException : public std::exception
	{
		public:
			NoExecutorException(){};
			NoExecutorException(NoExecutorException const &src);
			NoExecutorException & operator=(NoExecutorException const & src);
			/* ~NoExecutorException(void){}; */
			virtual const char * what(void) const throw() ;
	};
	private:
		OfficeBlock 		&operator=(OfficeBlock const & src);
		OfficeBlock(OfficeBlock const &src);
		Intern *_intern;
		Bureaucrat *_signingOne;
		Bureaucrat *_executor;
};
/* std::ostream 		&operator<<(std::ostream & o, OfficeBlock const & src); */

#endif
