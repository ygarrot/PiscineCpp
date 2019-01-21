/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:57 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 21:53:37 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP


#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed & new_);
		~Fixed(void);
		int toInt( void ) const;
		float toFloat( void ) const; 
		int getRawBits( void ) const; 
		void setRawBits( int const raw );
		float raw_to_float(int raw) const;
		float get_frac_part(void) const;
		Fixed & operator=(Fixed const & rhs);
		int operator>(Fixed const & rhs);
		int operator<(Fixed const & rhs);
		int operator>=(Fixed const & rhs);
		int operator<=(Fixed const & rhs);
		int operator==(Fixed const & rhs);
		int operator!=(Fixed const & rhs);
		Fixed operator+(Fixed const & rhs); 
		Fixed operator-(Fixed const & rhs); 
		Fixed operator*(Fixed const & rhs); 
		Fixed operator/(Fixed const & rhs); 
		static const Fixed & min(Fixed const & a, Fixed const & b);
		static Fixed & min(Fixed & a, Fixed & b);
		static const Fixed & max(Fixed const & a, Fixed const & b);
		static Fixed & max(Fixed & a, Fixed & b);
		Fixed & operator++(void);
		Fixed & operator++(int n);
	private:
		static const int frac_bits;
		int		_n;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
/* -- ++ */ 
#endif

