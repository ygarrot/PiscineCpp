/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 10:00:21 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 18:58:22 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : Name(name)
{
	std::cout << this->Name << " the pony is born" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << this->Name << " the pony is dead  ;(" << std::endl;
}


void	ponyOnTheHeap(void)
{
	Pony *Heapony = new Pony("Heapony");

	delete Heapony;
}


void	ponyOnTheStack(void)
{
	Pony PonyStack("PonyStack");

	return ;
}
