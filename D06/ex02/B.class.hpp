/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 17:46:12 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 18:02:57 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef B_BLASS_HPP
#define B_BLASS_HPP

#include <iostream>
#include "Base.hpp"

class 					B : public Base
{
	public:
		~B(void);
		B(void);
		B(B const &src);
		B 		&operator=(B const & src);

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, B const & src); */

#endif
