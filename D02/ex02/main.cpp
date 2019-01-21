/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 20:19:09 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 10:38:17 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
	Fixed a(1.12345678f), b(2.5f);

	std::cout << "(a > b)"  << std::endl;
	std::cout << (a > b)  << std::endl;
	std::cout << "(a < b)"  << std::endl;
	std::cout << (a < b)  << std::endl;
	std::cout << "(a >= b)"  << std::endl;
	std::cout << (a >= b)  << std::endl;
	std::cout << "(a <= b)"  << std::endl;
	std::cout << (a <= b)  << std::endl;
	std::cout << "(a == b)"  << std::endl;
	std::cout << (a == b)  << std::endl;
	std::cout << "(a + b + b)"  << std::endl;
	std::cout << (a + b + b)  << std::endl;
	std::cout << "(a - b)"  << std::endl;
	std::cout << (a - b)  << std::endl;
	std::cout << "(a * b * b)"  << std::endl;
	std::cout << (a * b * b)  << std::endl;
	std::cout << "(a / b)"  << std::endl;
	std::cout << (a / 0)  << std::endl;
	b = Fixed( 5.05f ) * Fixed( 2 );
	std::cout << a << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a * b<< std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0;
}
