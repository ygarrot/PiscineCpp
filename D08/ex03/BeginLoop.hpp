/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BeginLoop.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:32:17 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 22:19:17 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BEGINLOOP_HPP
#define BEGINLOOP_HPP

#include "IMindOpen.hpp"
typedef struct openStruct t_openStruct;

#include <iostream>

class 					BeginLoop : public IMindOpen
{
	public:
		~BeginLoop(void);
		BeginLoop(void);
		BeginLoop(t_openStruct *struc);
		BeginLoop(BeginLoop const &src);
		BeginLoop 		&operator=(BeginLoop const & src);
		int	execute(void);
		IMindOpen *end;

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, BeginLoop const & src); */

#endif
