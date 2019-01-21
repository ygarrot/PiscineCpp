/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:32:36 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:18:47 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const std::string ScavTrap::randomEnnemies[37] = {"Skag",
	"Spiderant",
	"Rakk",
	"Scythid",
	"Crab worm larvae",
	"Trash feeder",
	"Drifter",
	"Craw Maggot",
	"Arch Guardian",
	"Badass Guardian",
	"Guardian Wraith",
	"Guardian Spectre",
	"Principal Guardian",
	"Sera Guardian",
	"Bandit",
	"Crimson Lance",
	"Prisoner",
	"Hyperion Recon Team",
	"Lance Probe",
	"Gatling Turret",
	"Mulciber Mk2",
	"Rocket Turret",
	"Scorpio Turret",
	"Claptrap Partisan",
	"Kamikaze Claptrap",
	"Stabby Claptrap",
	"Zombie",
	"Defiler",
	"Tankenstein",
	"Loot Goon",
	"Torso",
	"Lance Zombie",
	"Corpse Eater",
	"Psycho Zombie",
	"Skelerakk",
	"Wereskag",
	"Suicide Zombie"};

const std::string ScavTrap::startQuotes[6] = {"Hey everybody! Check out my package!",
	"Let's get this party started!", "Glitching weirdness is a term of endearment, right?",
	"Recompiling my combat code!", "This time it'll be awesome, I promise!", 
	"Look out everybody! Things are about to get awesome!"};

const std::string ScavTrap::challengeQuotes[5] =
{"u versus me! Me versus you! Either way!",
"I will prove to you my robotic superiority!",
"Dance battle! Or, you know... regular battle.",
"Man versus machine! Very tiny streamlined machine!",
"Care to have a friendly duel?"};


void	ScavTrap::print_attack(std::string name, std::string target, int damage) 
{
	std::cout << "ScavTrap " << name << " attacks " << target <<
		" at range, causing " << damage  << " points of damage !" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	if (this == &src)
		return *this;
	this->hitPoints = src.hitPoints;
	this->maxHitPoints = src.maxHitPoints;
	this->energyPoints = src.energyPoints;
	this->maxEnergyPoints = src.maxEnergyPoints;
	this->level = src.level;
	this->meleeAttackDamage = src.meleeAttackDamage;
	this->rangedAttackDamage = src.rangedAttackDamage;
	this->armorDamageReduction = src.armorDamageReduction;
	return *this;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	return;
}


ScavTrap::ScavTrap(void) : name("ScavTrap"), hitPoints(100),
	maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), level(1), meleeAttackDamage(30),
	rangedAttackDamage(20), armorDamageReduction(5)
{
	std::cout << this->startQuotes[rand()%6] << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : name(name), hitPoints(100),
	maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), level(1), meleeAttackDamage(30),
	rangedAttackDamage(20), armorDamageReduction(5)
{
	std::cout << this->startQuotes[rand()%6] << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "I'll die the way I lived: annoying!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	this->print_attack(this->name, target, this->rangedAttackDamage);
}

void ScavTrap::meleeAttack(std::string const & target)
{
	this->print_attack(this->name, target, this->meleeAttackDamage);
}

void ScavTrap::takeDamage(unsigned int amount)
{
	amount -= (unsigned int)this->armorDamageReduction;
	amount = (int)amount > this->hitPoints ? this->hitPoints : amount;
	std::cout << "FR4G-TP " << name << " lose " << amount << " HP !" << std::endl;
	this->hitPoints -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	amount = (int)amount + this->hitPoints >  this->maxHitPoints ? this->maxHitPoints - this->hitPoints : amount;
	std::cout << "FR4G-TP " << name << " heal " << amount << " HP !" << std::endl;
	this->hitPoints += amount;
}

std::string	ScavTrap::getRandomTarget(void)
{
	return (this->randomEnnemies[rand()%37]);
}

void	ScavTrap::challengeNewcomer(void)
{
	std::cout << this->challengeQuotes[rand()%4] << " (challenge) " <<std::endl;
	return ;
}

