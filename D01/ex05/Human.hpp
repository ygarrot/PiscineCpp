/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:40:02 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 19:45:54 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class Human
{
	public:
	
		std::string identify(void);
		Brain& getBrain(void);

	private:
		Brain _brain;

};
#endif
