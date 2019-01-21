/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:38:34 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 13:41:51 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " <<
		this->weapon->getType() << std::endl;

}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
}
