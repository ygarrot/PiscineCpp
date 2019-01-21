/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 13:55:39 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 15:41:59 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class 					Array
{
	public:
		~Array();
		Array();
		Array(unsigned int i);
		Array(Array const &src);
		unsigned int size(void);
		Array 		&operator=(Array const & src);
		T 		&operator[](int index);
				class OutOfLimitException : public std::exception
	{
		public:
			OutOfLimitException(){};
			OutOfLimitException(OutOfLimitException const &src);
			/* OutOfLimitException & operator=(OutOfLimitException const & src); */
			/* ~OutOfLimitException(void){}; */
			virtual const char * what(void) const throw() ;
	};

	private:
		void _realloc(Array const & toCopy);
		T *_elems;
		unsigned int _size;
};

/* std::ostream 		&operator<<(std::ostream & o, Array const & src); */
template<typename T>
const char *Array<T>::OutOfLimitException::what(void) const throw()
{
	return ("The index you provided is out of elem's limit");
}

template<typename T>
Array<T>::OutOfLimitException::OutOfLimitException(Array<T>::OutOfLimitException const &src)
{
	*this = src;
}

/* template<typename T > */
/* Array<T>::OutOfLimitException & Array<T>::OutOfLimitException::operator=(Array<T>::OutOfLimitException const & src) */
/* { */
/* 	(void)src; */
/* 	return *this; */	
/* } */



	template <typename T>
void Array<T>::_realloc(Array const & src)
{
	delete [] this->_elems;

	this->_elems = new int [src._size];
	memcpy(this->_elems, src._elems, src._size);
	this->_size = src._size;
}

	template <typename T>
Array<T>::Array(unsigned int i) 
{
	this->_elems = new T[i];
	memset(this->_elems, 0, i);
	this->_size = i;
}

	template <typename T>
Array<T>::Array(void) : _size(0)
{
	this->_elems = new T[0];
}

	template <typename T>
Array<T>::~Array(void) 
{
	delete [] this->_elems;
}

	template <typename T>
Array<T> 		&Array<T>::operator=(Array const & src)
{
	this->_realloc(src);
	return *this;
}

	template <typename T>
T &Array<T>::operator[](int index)
{
	if (static_cast<int>(this->_size) < index + 1 || index < 0)
		throw OutOfLimitException();
	return this->_elems[index];
}

	template <typename T>
Array<T>::Array(Array const &src)
{
	this->_realloc(src);
}

	template<typename T>
unsigned int Array<T>::size(void)
{
	return this->_size;
}


#endif
