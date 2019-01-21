/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 21:26:49 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 22:42:31 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

const std::string SuperTrap::dieQuotes[8] = 
{"I'll stop talking when I'm dead!","I'll die the way I lived: annoying!",
	"Come back here! I'll gnaw your legs off!","This could've gone better!",
	"You look like something a skag barfed up!","What's that smell? Oh wait, it's just you!",
	"Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!",
	"You're one screw short of a screw!"};

const std::string SuperTrap::startQuotes[11] =
{"Step right up, to the Bulletnator 9000!", 
	"I am a tornado of death and bullets!",
	"Stop me before I kill again, except don't!",
	"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!",
	"I'm on a roll!",
	"Unts unts unts unts!",
	"Ha ha ha! Fall before your robot overlord!",
	"Can't touch this!",
	"Ha! Keep 'em coming!",
	"There is no way this ends badly!",
	"This is why I was built!"};

void	SuperTrap::selfPrint(void)
{
	std::cout << "[SuperTrap] " << this->name << ": ";
}

SuperTrap::SuperTrap(SuperTrap const & src) : NinjaTrap(src), FragTrap(src), level(1)
{
	*this = src;
	return;
}

SuperTrap::SuperTrap(void) : NinjaTrap(), FragTrap(), level(1) 
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%10] << " (new)"  << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name) 
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%10] << " (new)" << std::endl;
	return ;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & src)
{
	(void)src;
	return *this;
}

SuperTrap::~SuperTrap(void)
{
	this->selfPrint();
	std::cout << this->dieQuotes[rand()%5] << " (death) " << std::endl;
}

