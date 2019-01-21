/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:56:57 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 11:54:19 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed & new_);
		~Fixed(void);
		int getRawBits( void ) const; 
		void setRawBits( int const raw );
		Fixed & operator=(Fixed const & rhs);

	private:
		static const int frac_bits;
		int		_n;
};


#endif

