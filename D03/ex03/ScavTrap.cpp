/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:32:36 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 18:17:15 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const std::string ScavTrap::startQuotes[11] =
{"haha... I ascend!",
"Ha ha ha! I LIVE! Hahaha!",
"Hahahahaha! I'm alive!",
"Good, I didn't want any spare parts!",
"Wow, that actually worked?",
"You can't keep a good 'bot down!",
"I'm back! Woo!",
"Holy crap, that worked?",
"Better lucky than good!",
"Back for more!",
"Here we go again!"};

const std::string ScavTrap::dieQuotes[15] = 
{"I bet your mom could do better!","You look like something a skag barfed up!",
	"Oh yeah? Well, uh... yeah.","What is that smell? Oh, never mind... it's just you!",
	"I'm leaking!","Good thing I don't have a soul!","Aww!","Aww! Come on!",
	"You can't kill me!","I'm too pretty to die!","Crap!","Robot down!",
	"No, nononono NO!","I'll never go back to the bad place!",
	"I have many regrets!" };

const std::string ScavTrap::challengeQuotes[5] =
{"u versus me! Me versus you! Either way!",
"I will prove to you my robotic superiority!",
"Dance battle! Or, you know... regular battle.",
"Man versus machine! Very tiny streamlined machine!",
"Care to have a friendly duel?"};

void	ScavTrap::selfPrint(void)
{
	std::cout << "[ScavTrap] " << this->name << ": ";
}

void	ScavTrap::challengeNewcomer(void)
{
	this->selfPrint();
	std::cout << this->challengeQuotes[rand()%4] << " (challenge) " <<std::endl;
	return ;
}

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap", "ScavTrap", 100, 100, 50, 50, 1, 20, 15, 3)
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%9] << " (new)"  << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) 
{
	*this = src;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name,"ScavTrap", 100, 100, 50, 50, 1, 20, 15, 3)
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%9] << " (new)"  << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	this->selfPrint();
	std::cout << this->dieQuotes[rand()%11] << " (death) " << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	ClapTrap::operator=(src);
	return *this;
}

