/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InsertByte.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:36:43 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:50:02 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INSERTBYTE_HPP
#define INSERTBYTE_HPP

#include "IMindOpen.hpp"
typedef struct openStruct t_openStruct;

#include <iostream>

class 					InsertByte : public IMindOpen
{
	public:
		~InsertByte(void);
		InsertByte(void);
		InsertByte(t_openStruct *struc);
		InsertByte(InsertByte const &src);
		InsertByte 		&operator=(InsertByte const & src);
		int	execute(void);

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, InsertByte const & src); */

#endif
