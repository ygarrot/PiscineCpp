/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:52:04 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/17 16:27:39 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "span.hpp"

Span::Span(unsigned int size) : _size(size)
{
}

Span::Span() 
{

}

Span::~Span() 
{
	this->_set.clear();
}

Span::Span(Span const &src)
{
	*this = src;
}

Span     &Span::operator=(Span const & src) 
{
	(void)src;
	return *this;
}

const char *Span::ContainerIsFullException::what(void) const throw()
{
	return ("You cannot add number, container is full");
}

Span::ContainerIsFullException::ContainerIsFullException(Span::ContainerIsFullException const &src)
{
	*this = src;
}

Span::ContainerIsFullException & Span::ContainerIsFullException::operator=(Span::ContainerIsFullException const & src)
{
	(void)src;
	return *this;	
}

const char *Span::NotEnoughNumberException::what(void) const throw()
{
	return ("There is not enough number in container, cannot calculate a span");
}

Span::NotEnoughNumberException::NotEnoughNumberException(Span::NotEnoughNumberException const &src)
{
	*this = src;
}

Span::NotEnoughNumberException & Span::NotEnoughNumberException::operator=(Span::NotEnoughNumberException const & src)
{
	(void)src;
	return *this;	
}

void GetLowest::operator()(int n) {
	if (!this->start)
	{
		this->a = n;
		this->start++;
		this->low = n;
	}
	else{
		if (abs(this->a - n) < low) 
		{
			this->low = abs(this->a-n);
			this->a = n;
		}
	}
}

GetLowest::GetLowest(void) {
	start = 0;
	low = INT_MAX; 
}

void	Span::checkNumberOfBlock()
{
	if (this->_set.size() < 2)
		throw NotEnoughNumberException();
}

void	Span::addNumber(int number)
{
	if (this->_set.size() + 1 >= this->_size)
		throw ContainerIsFullException();
	this->_set.insert(number);
}

int Span::shortestSpan(void)
{
	this->checkNumberOfBlock();
	GetLowest s = std::for_each (this->_set.begin(), this->_set.end(), GetLowest());
	return s.low;
}

int	Span::longestSpan(void)
{
	this->checkNumberOfBlock();
	return *this->_set.begin() - *--this->_set.end();
}

