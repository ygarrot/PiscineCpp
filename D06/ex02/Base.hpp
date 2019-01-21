/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 17:00:26 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 18:06:36 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class 					Base
{
	public:
		virtual ~Base(void);
		Base(void);
		Base(Base const &src);
		Base 		&operator=(Base const & src);
		Base *generate(void);
	private:
};
/* std::ostream 		&operator<<(std::ostream & o, Base const & src); */

#endif
