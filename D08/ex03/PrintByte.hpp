/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintByte.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:27:46 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:49:47 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTBYTE_HPP
#define PRINTBYTE_HPP

#include "IMindOpen.hpp"
typedef struct openStruct t_openStruct;

#include <iostream>

class 					PrintByte : public IMindOpen
{
	public:
		~PrintByte(void);
		PrintByte(void);
		PrintByte(t_openStruct *struc);
		PrintByte(PrintByte const &src);
		PrintByte 		&operator=(PrintByte const & src);
		int	execute(void);

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, PrintByte const & src); */

#endif
