/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Areated: 2019/01/16 17:46:46 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 18:02:04 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef A_ALASS_HPP
#define A_ALASS_HPP

#include <iostream>
#include "Base.hpp"

class 					A : public Base
{
	public:
		~A(void);
		A(void);
		A(std::string name);
		A(A const &src);
		A 		&operator=(A const & src);

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, A const & src); */

#endif
