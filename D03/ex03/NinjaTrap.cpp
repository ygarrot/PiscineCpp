/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:21:06 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 21:21:58 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

const std::string NinjaTrap::dieQuotes[8] = 
{"I'll stop talking when I'm dead!","I'll die the way I lived: annoying!",
	"Come back here! I'll gnaw your legs off!","This could've gone better!",
	"You look like something a skag barfed up!","What's that smell? Oh wait, it's just you!",
	"Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!",
	"You're one screw short of a screw!"};

const std::string NinjaTrap::startQuotes[11] =
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

void NinjaTrap::ninjaShoebox(ClapTrap & bot)
{
	std::cout << bot.name << ": 01010110 01001001 01010110 01000001 00100000 01001100 01000001 00100000 01010010 01001111 01010010 01001111 01001100 01010101 01010100 01001001 01001111 01001110" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & bot)
{
	std::cout << bot.name << "NinjaTrap is a crazy one:" 
		<<std::endl;
	bot.rangedAttack(this->name);
	std::cout << ": We are the claptraps and we are legion! Viva la Robolution!" 
		<<std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap  & bot)
{
	std::cout << bot.name  << ": MurderDeathKill! Annihilate! Extermin-" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & bot)
{
	std::cout << bot.name << ": Give us open ports for remote access or give us death!" <<std::endl;
}

void	NinjaTrap::selfPrint(void)
{
	std::cout << "[NinjaTrap] " << this->name << ": ";
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src)
{
	*this = src;
	return;
}

NinjaTrap::NinjaTrap(void) : ClapTrap("NinjaTrap", "NinjaTrap", 60, 60, 120, 120, 1, 60, 5, 0)
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%10] << " (new)"  << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, "NinjaTrap",60, 60, 120, 120, 1, 60, 5, 0)
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%10] << " (new)" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	this->selfPrint();
	std::cout << this->dieQuotes[rand()%5] << " (death) " << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
{
	ClapTrap::operator=(src);
	return *this;
}

