/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:59 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 18:37:24 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

const int Fixed::frac_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
}

Fixed::Fixed(const Fixed & newF)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_n = newF.getRawBits();
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return *this;
}

Fixed::Fixed(const int n)
{
	this->_n = n << this->frac_bits;
}

float		Fixed::get_frac_part(void) const
{
	return (this->_n & ((1 << (Fixed::frac_bits )) -1));
}

Fixed::Fixed(const float n)
{
	this->_n = (int)n << Fixed::frac_bits;
	this->_n |= (int)roundf(n * (1 << (Fixed::frac_bits ))); 
}

int Fixed::toInt( void ) const
{
	return this->_n >> this->frac_bits;
}

float Fixed::toFloat( void ) const 
{
	return (double)this->_n / double(1<<Fixed::frac_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat(); 
	return o;
}


