/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:52:01 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/17 21:35:38 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class 					Span
{
	public:
		~Span(void);
		Span(unsigned int size);
		Span(std::string name);
		Span(Span const &src);
		Span 		&operator=(Span const & src);
		void	addNumber(int number);
		template<typename T>
		/* void	mergeContainer(T container); */
void	mergeContainer(typename T::const_iterator const & begin, typename T::const_iterator const & end);
		void	checkNumberOfBlock(void);
		int shortestSpan(void);
		int	longestSpan(void);

		class NotEnoughNumberException : public std::exception
	{
		public:
			NotEnoughNumberException(){};
			NotEnoughNumberException(NotEnoughNumberException const &src);
			NotEnoughNumberException & operator=(NotEnoughNumberException const & src);
			/* ~NotEnoughNumberException(void){}; */
			virtual const char * what(void) const throw() ;
	};

		class ContainerIsFullException : public std::exception
	{
		public:
			ContainerIsFullException(){};
			ContainerIsFullException(ContainerIsFullException const &src);
			ContainerIsFullException & operator=(ContainerIsFullException const & src);
			/* ~ContainerIsFullException(void){}; */
			virtual const char * what(void) const throw() ;
	};
	private:
		Span(void);
		std::set<int, std::greater<int> > _set;
		unsigned int _size;
};
/* std::ostream 		&operator<<(std::ostream & o, Span const & src); */

struct GetLowest
{
	GetLowest();
	void operator()(int n);
	int start;
	int low;
	int a;
};

template <typename T>
void	Span::mergeContainer(typename T::const_iterator const & begin, typename T::const_iterator const & end)
{
	if (static_cast<unsigned long>(abs(begin-end)) > this->_size - this->_set.size())
		throw ContainerIsFullException();
	this->_set.insert(begin, end);
}
#endif
