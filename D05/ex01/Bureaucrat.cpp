/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:19:39 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 21:14:31 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Bureaucrat::GradeTooHighException(GradeTooHighException const & src) */
/* { */
/* 	*this = src; */
/* } */

/* #include <vector> */
void	Bureaucrat::checkLimit(int grade)
{
	if (grade >152)
		throw GradeTooHighException(); 
	if (grade < 1)
		throw GradeTooLowException(); 
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	/* std::vector<int> myList; */
	/* myList.at(2); */
	this->checkLimit(this->_grade);
}

void	Bureaucrat::signForm(Form & form) const
{
	try 
	{
		form.beSigned(*this);
		std::cout << this->_name + " signs " + form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name + " cannot sign " + form.getName() + " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & src)
{
	(void)src;
	return *this;	
}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const &src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & src)
{
	(void)src;
	return *this;	
}

Bureaucrat::Bureaucrat() : _name("Bureaucrat"),  _grade(150)
{

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	*this = src;
}

std::ostream 		&operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << src.getName() + ", bureaucrat grade " << src.getGrade(); 
	return o;
}

Bureaucrat     &Bureaucrat::operator=(Bureaucrat const & src) {
	this->_grade = src._grade;
	return *this;
}

int         Bureaucrat::getGrade(void) const {
	return this->_grade;
}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

void	Bureaucrat::decreaseGrade(int value)
{
	value = this->_grade - value;
	this->checkLimit(value);
	this->_grade = value;
}

void	Bureaucrat::increaseGrade(int value)
{
	value = this->_grade + value;
	this->checkLimit(value);
	this->_grade = value;
}
