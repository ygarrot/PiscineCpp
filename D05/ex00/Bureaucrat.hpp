/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 11:59:36 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 21:03:19 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACHARACTER_HPP
#define ACHARACTER_HPP

#include <string>
#include <stdexcept>
#include <iostream>

class 					Bureaucrat
{
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);

		Bureaucrat 		&operator=(Bureaucrat const & src);
		int	getGrade(void)const;
		std::string	getName(void)const;
		void	decreaseGrade(int decr);
		void increaseGrade(int incr);
	void	checkLimit(int grade);
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
		const std::string _name;
		int _grade;
};

std::ostream 		&operator<<(std::ostream & o, Bureaucrat const & src);

#endif
