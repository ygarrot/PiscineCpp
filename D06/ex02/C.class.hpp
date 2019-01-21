/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 17:46:58 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 18:02:30 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef C_CLASS_HPP
#define C_CLASS_HPP

#include <iostream>
#include "Base.hpp"

class 					C : public Base
{
	public:
		~C(void);
		C(void);
		C(C const &src);
		C 		&operator=(C const & src);

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, C const & src); */

#endif
