/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 11:45:57 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 11:24:53 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const std::string FragTrap::dieQuotes[8] = 
{"I'll stop talking when I'm dead!","I'll die the way I lived: annoying!",
	"Come back here! I'll gnaw your legs off!","This could've gone better!",
	"You look like something a skag barfed up!","What's that smell? Oh wait, it's just you!",
	"Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!",
	"You're one screw short of a screw!"};

const std::string FragTrap::startQuotes[11] =
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


void	FragTrap::selfPrint(void)
{
	std::cout << "[FragTrap] " << this->name << ": ";
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	*this = src;
	return;
}

FragTrap::FragTrap(void) : ClapTrap("FlagTrap", "FragTrap", 100, 100, 100, 100, 1, 30, 20, 5)
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%10] << " (new)"  << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, "FragTrap", 100, 100, 100, 100, 1, 30, 20, 5)
{

	this->selfPrint();
	std::cout << this->startQuotes[rand()%10] << " (new)" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	this->selfPrint();
	std::cout << this->dieQuotes[rand()%5] << " (death) " << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	ClapTrap::operator=(src);
	return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int index;
	typedef struct attack_dic { int damage; std::string name;} t_attacks_dic;
	t_attacks_dic attack[5] = { {42, "Sniper Rifles"}, {23, "Assault Rifles"}, { 34, "Explosive Element"}, {65, "Knock-knock jokes"}, {31, "Gun Wizard"}};

	if (this->energyPoints - 25 < 0)
	{
		std::cout << "FR4G-TP" << this->name << " is out of energy :<" << std::endl;
		return ;
	}
	index = rand()%4;
	print_attack( target, "with a " + attack[index].name,attack[index].damage);
	this->energyPoints -=25;
}
