/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:48:11 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 22:46:15 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <stdexcept>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class 					Form
{
	public:
		virtual ~Form(void);
		Form(std::string name, int signingGrade, int executeGrade);
		Form(Form const &src);

		Form 		&operator=(Form const & src);
		int	getSigningGrade(void)const;
		int	getExecuteGrade(void)const;
		void signingGradeIsEnough(int grade) const;
		void executeGradeIsEnough(int grade) const;
		void	checkGrade(int grade)const;
		std::string	getName(void)const;
		void beSigned(Bureaucrat const &bureaucrat);
		bool getSignState(void) const ;
		std::string		getTarget(void);
		void	execute(Bureaucrat const & executor) const;

		class NotSignedException : public std::exception
	{
		public:
			NotSignedException(){};
			NotSignedException(NotSignedException const &src);
			NotSignedException & operator=(NotSignedException const & src);
			/* ~NotSignedException(void){}; */
			virtual const char * what(void) const throw() ;
	};
class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(){};
			GradeTooHighException(GradeTooHighException const &src);
			GradeTooHighException & operator=(GradeTooHighException const & src);
			/* ~GradeTooHighException(void){}; */
			virtual const char * what(void) const throw() ;
	};
		class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void){};
			GradeTooLowException(GradeTooLowException const &src);
			/* ~GradeTooLowException(void){}; */
			GradeTooLowException & operator=(GradeTooLowException const & src);
			virtual const char * what(void) const throw() ;
	};

	private:
		std::string	_target;
		const std::string _name;
		const int _signingGrade;
		const int _executeGrade;
		int _isSigned;
	protected:
		virtual void	executeForm(Bureaucrat const & target) const;
		Form(void);
};

std::ostream 		&operator<<(std::ostream & o, Form const & src);

#endif
