/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncPtr.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:24:31 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:50:02 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCPTR_HPP
#define INCPTR_HPP

#include "IMindOpen.hpp"
typedef struct openStruct t_openStruct;

#include <iostream>

class 					IncPtr : public IMindOpen
{
	public:
		~IncPtr(void);
		IncPtr(void);
		IncPtr(t_openStruct *struc);
		IncPtr(IncPtr const &src);
		IncPtr 		&operator=(IncPtr const & src);
		int	execute(void);

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, IncPtr const & src); */

#endif
