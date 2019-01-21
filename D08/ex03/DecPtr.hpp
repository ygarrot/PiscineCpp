/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecPtr.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:26:03 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 17:50:02 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DECPTR_HPP
#define DECPTR_HPP

#include "IMindOpen.hpp"
typedef struct openStruct t_openStruct;

#include <iostream>

class 					DecPtr : public IMindOpen
{
	public:
		~DecPtr(void);
		DecPtr(void);
		DecPtr(t_openStruct *struc);
		DecPtr(DecPtr const &src);
		DecPtr 		&operator=(DecPtr const & src);
		int	execute(void);

	private:
};
/* std::ostream 		&operator<<(std::ostream & o, DecPtr const & src); */

#endif
