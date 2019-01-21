/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 17:00:08 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 20:55:10 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"
#include <cstdlib>

A 	*generateAclass(void)
{
	return new A;
}

B 	*generateBclass(void)
{
	return new B;
}

C 	*generateCclass(void)
{
	return new C;
}

Base *Base::generate(void)
{
	Base *ptr;

	int rando = rand() % 3;
	switch (rando)
	{
		case 0 : ptr = static_cast<A*>(new A);break;
		case 1 : ptr = static_cast<B*>(new B);break;
		case 2 : ptr = static_cast<C*>(new C);break;
	}
	std::cout << static_cast<char>('A' + rando) << std::endl;
	return ptr;
}

Base::Base() 
{

}

Base::~Base() 
{

}

Base::Base(Base const &src)
{
	*this = src;
}

Base     &Base::operator=(Base const & src) 
{
	(void)src;
	return *this;
}

