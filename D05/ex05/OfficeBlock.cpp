/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 17:59:25 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 23:34:34 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

	OfficeBlock::OfficeBlock(Intern & intern, Bureaucrat & sign, Bureaucrat & executor) 
: _intern(&intern), _signingOne(&sign), _executor(&executor)
{

}

OfficeBlock::OfficeBlock() : _intern(0), _signingOne(0), _executor(0) 
{

}

OfficeBlock::~OfficeBlock() 
{

}

OfficeBlock::OfficeBlock(OfficeBlock const &src)
{
	*this = src;
}

OfficeBlock     &OfficeBlock::operator=(OfficeBlock const & src) 
{
	(void)src;
	return *this;
}

const char *OfficeBlock::BadFormException::what(void) const throw()
{
	return ("Form arguments are wrong");
}

OfficeBlock::BadFormException::BadFormException(OfficeBlock::BadFormException const &src)
{
	*this = src;
}

OfficeBlock::BadFormException & OfficeBlock::BadFormException::operator=(OfficeBlock::BadFormException const & src)
{
	(void)src;
	return *this;	
}

const char *OfficeBlock::NoInternException::what(void) const throw()
{
	return ("No intern is assigned");
}

OfficeBlock::NoInternException::NoInternException(OfficeBlock::NoInternException const &src)
{
	*this = src;
}

OfficeBlock::NoInternException & OfficeBlock::NoInternException::operator=(OfficeBlock::NoInternException const & src)
{
	(void)src;
	return *this;	
}

const char *OfficeBlock::NoSignerException::what(void) const throw()
{
	return ("No signer is assigned");
}

OfficeBlock::NoSignerException::NoSignerException(OfficeBlock::NoSignerException const &src)
{
	*this = src;
}

OfficeBlock::NoSignerException & OfficeBlock::NoSignerException::operator=(OfficeBlock::NoSignerException const & src)
{
	(void)src;
	return *this;	
}

const char *OfficeBlock::NoExecutorException::what(void) const throw()
{
	return ("No executor is assigned");
}

OfficeBlock::NoExecutorException::NoExecutorException(OfficeBlock::NoExecutorException const &src)
{
	*this = src;
}

OfficeBlock::NoExecutorException & OfficeBlock::NoExecutorException::operator=(OfficeBlock::NoExecutorException const & src)
{
	(void)src;
	return *this;	
}

void OfficeBlock::setIntern(Intern * intern)
{
	this->_intern = intern;
}

void	OfficeBlock::setExecutor(Bureaucrat * executor)
{
	this->_executor = executor;
}

void	OfficeBlock::setSigner(Bureaucrat * signingOne)
{
	this->_signingOne = signingOne;
}

Intern	* OfficeBlock::getIntern(void) const
{
	return this->_intern;
}

Bureaucrat	* OfficeBlock::getExecutor(void) const
{
	return this->_executor;
}

Bureaucrat	* OfficeBlock::getSigner(void) const
{
	return this->_signingOne;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string targetName) const
{
	Form *form;
	
	if (!this->_intern)
	{
		throw NoInternException();
	}
	if (!this->_signingOne)
	{
		throw NoSignerException();
	}
	if (!this->_executor)
	{
		throw NoExecutorException();
	}
	form = this->_intern->makeForm(formName, targetName);
	if (!form)
	{
		throw BadFormException();
		return ;
	}
	this->_signingOne->signForm(*form);
	this->_executor->executeForm(*form);
}
