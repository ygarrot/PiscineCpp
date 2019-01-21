/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EndLoop.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:35:21 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 22:19:16 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENDLOOP_HPP
#define ENDLOOP_HPP

#include "IMindOpen.hpp"
typedef struct openStruct t_openStruct;

#include <iostream>

class 					EndLoop : public IMindOpen
{
	public:
		~EndLoop(void);
		EndLoop(void);
		EndLoop(t_openStruct *struc);
		EndLoop(EndLoop const &src);
		EndLoop 		&operator=(EndLoop const & src);
		int	execute(void);
		IMindOpen *begin;

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, EndLoop const & src); */

#endif
