/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:19:39 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 18:49:10 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void Form::checkGrade(int grade) const
{
	if (grade >152)
		throw GradeTooHighException(); 
	if (grade < 1)
		throw GradeTooLowException(); 
}

void Form::signingGradeIsEnough(int grade) const
{

	if (grade > this->_signingGrade)
		throw GradeTooLowException();
}

void	Form::executeGradeIsEnough(int grade) const
{
	if (grade > this->_executeGrade)
		throw GradeTooLowException();
}

void Form::beSigned(Bureaucrat const & bureaucrat) 
{
	int grade = bureaucrat.getGrade();

	this->signingGradeIsEnough(grade);
	this->_isSigned = true;
}

const char *Form::NotSignedException::what(void) const throw()
{
	return ("Form is not signed");
}

Form::Form(std::string name, int signingGrade, int executeGrade) :
	_name(name), _signingGrade(signingGrade), _executeGrade(executeGrade), _isSigned(false){
		checkGrade(signingGrade);
		checkGrade(executeGrade);
	}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &src)
{
	*this = src;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(Form::GradeTooHighException const & src)
{
	(void)src;
	return *this;	
}

Form::NotSignedException::NotSignedException(Form::NotSignedException const &src)
{
	*this = src;
}

Form::NotSignedException & Form::NotSignedException::operator=(Form::NotSignedException const & src)
{
	(void)src;
	return *this;	
}


Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &src)
{
	*this = src;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(Form::GradeTooLowException const & src)
{
	(void)src;
	return *this;	
}


Form::Form() : _name("Form"),  _signingGrade(150), _executeGrade(150)
{

}

Form::~Form() {

}

Form::Form(Form const &src) : _signingGrade(src._signingGrade), _executeGrade(src._executeGrade){
	*this = src;
}

std::ostream 		&operator<<(std::ostream & o, Form const & src)
{
	o << src.getName() 
		<<", form, signing grade required: " << src.getSigningGrade() 
		<< ", execute grade required: " << src.getExecuteGrade() << ", " 
		<< (src.getSignState() ? "" : "not ") << "signed"; 
	return o;
}

Form     &Form::operator=(Form const & src) {
	(void)src;
	this->_isSigned = src.getSignState();
	/* this->_name = src.getName(); */
	/* this->_signingGrade = src._signingGrade; */
	return *this;
}

int         Form::getSigningGrade(void) const {
	return this->_signingGrade;
}

int         Form::getExecuteGrade(void) const {
	return this->_executeGrade;
}

std::string Form::getName(void) const {
	return this->_name;
}

bool Form::getSignState(void) const {
	return this->_isSigned;
}

void	Form::executeForm(Bureaucrat const & executor) const
{
(void)executor;
	return;
}

void	Form::execute(Bureaucrat const & executor) const
{
		this->executeGradeIsEnough(executor.getGrade());
		if (!this->_isSigned)
			throw NotSignedException();
		this->executeForm(executor);
}

