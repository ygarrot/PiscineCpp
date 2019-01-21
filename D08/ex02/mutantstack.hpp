/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:12:01 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 23:33:16 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class 					MutantStack : public std::stack<T>
{
	public:
		~MutantStack(void);
		MutantStack(void);
		MutantStack(T const & type);
		MutantStack(MutantStack const &src);
		MutantStack<T> & operator=(MutantStack<T> const & src);
		void push(const T& val );
		void pop(void);
		T top(void);
		size_t size(void) const;
		bool empty() const;
		typedef typename std::list<T>::iterator iterator;
		iterator begin(void);
		iterator end(void);
	private:
		std::list<T> _list;
};
/* std::ostream 		&operator<<(std::ostream & o, MutantStack const & src); */

template<typename T>
typename std::list<T>::iterator  MutantStack<T>::begin(void){return this->_list.begin();}

template<typename T>
typename std::list<T>::iterator MutantStack<T>::end(void){return this->_list.end();}

template<typename T>
MutantStack<T> 		& MutantStack<T>::operator=(MutantStack<T> const & src)
{
	this->_list = iterator(src._list);
}

template<typename T>
bool MutantStack<T>::empty() const
{
	return this->_list.empty();
}

	template<typename T>
MutantStack<T>::MutantStack() 
{
	return ;
}

	template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & type) 
{
	this->_list = type._list;
}

	template<typename T>
MutantStack<T>::MutantStack(T const & type) 
{
	this->_list(type);
}

	template<typename T>
T MutantStack<T>::top(void)
{
	return this->_list.back();
}

template<typename T>
size_t MutantStack<T>::size(void) const
{
	return this->_list.size();
}

	template<typename T>
MutantStack<T>::~MutantStack() 
{
	return ;
}

	template<typename T>
void MutantStack<T>::pop(void)
{
	this->_list.pop_back();
}

	template<typename T>
void MutantStack<T>::push(const T& val )
{
	this->_list.push_back(val);
}

#endif
