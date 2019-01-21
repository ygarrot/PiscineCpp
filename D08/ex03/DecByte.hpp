/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecByte.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:22:44 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:50:02 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DECBYTE_HPP
#define DECBYTE_HPP

#include "IMindOpen.hpp"
typedef struct openStruct t_openStruct;

#include <iostream>

class 					DecByte : public IMindOpen
{
	public:
		~DecByte(void);
		DecByte(void);
		DecByte(t_openStruct *struc);
		DecByte(std::string name);
		DecByte(DecByte const &src);
		DecByte 		&operator=(DecByte const & src);
		int	execute(void);

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, DecByte const & src); */

#endif
