/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:45:45 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 10:59:54 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void	ZombieHorde::announce()
{
	
	for (int i = 0; i < this->zombieNumber; i++)
	{
		this->horde[i].announce();
	}
}

ZombieHorde::ZombieHorde(int zombieNumber) : zombieNumber(zombieNumber)
{
	if (zombieNumber <= 0)
	{
		std::cout << "You are not very smart to try this :/ please give me a positive number" << std::endl;
		return ;
	}
 this->horde = new Zombie[zombieNumber];
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	if (this->zombieNumber <= 0)
		return ;
	delete [] this->horde;
}

