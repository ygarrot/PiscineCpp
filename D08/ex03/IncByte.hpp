/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncByte.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:24:01 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:50:02 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCBYTE_HPP
#define INCBYTE_HPP

#include "IMindOpen.hpp"
typedef struct openStruct t_openStruct;

#include <iostream>

class 					IncByte : public IMindOpen
{
	public:
		~IncByte(void);
		IncByte(void);
		IncByte(t_openStruct *struc);
		IncByte(IncByte const &src);
		IncByte 		&operator=(IncByte const & src);
		int	execute(void);

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, IncByte const & src); */

#endif
