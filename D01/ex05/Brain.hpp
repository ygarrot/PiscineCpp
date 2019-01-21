/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:56:32 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 13:40:55 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class Brain
{
	public:
		Brain(void);
		Brain *address;
		std::string cell;
		std::string neuron;
		std::string synapse;
		std::string identify(void);
};

#endif
