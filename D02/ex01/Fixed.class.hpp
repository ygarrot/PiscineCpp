/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:57 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 18:35:41 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP


#include <cmath>
#include <iostream>

class Fixed
{
	public:
		Fixed(const int n);
		Fixed(const float n);
		Fixed(void);
		Fixed(const Fixed & new_);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);
		float toFloat( void ) const; 
		int toInt( void ) const;
		int getRawBits( void ) const; 
		void setRawBits( int const raw );
		float get_frac_part(void) const;
	private:
		static const int frac_bits;
		int		_n;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif

