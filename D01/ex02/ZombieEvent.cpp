/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 10:39:17 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 10:40:29 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : _type("General")
{
	return;
}

void	ZombieEvent::randomChump()
{
	Zombie *randomBudy;
	std::string name_list[30] = {"Zahara","Zandra","Zaneta","Zara","Zarah",
		"Zaria","Zarla","Zea","Zelda","Zelma","Zena","Zenia","Zia","Zilvia",
		"Zita","Zitella","Zoe","Zola","Zonda","Zondra","Zonnya","Zora",
		"Zorah","Zorana","Zorina","Zorine","Zsa Zsa","Zsazsa","Zulema","Zuzana"};

	srand(time(0));
	randomBudy = new Zombie(name_list[rand() % 20], this->_type);
	randomBudy->announce();
	delete randomBudy;
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}
