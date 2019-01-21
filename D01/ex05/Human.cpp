/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:40:04 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 19:45:54 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>
#include "Brain.hpp"

std::string Human::identify(void)
{
	return (this->getBrain().identify());
}

Brain& Human::getBrain(void)
{
	return (this->_brain);
}
