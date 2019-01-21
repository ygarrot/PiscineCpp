/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:43:50 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:19:40 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const std::string ClapTrap::randomEnnemies[37] = {"Skag",
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

const std::string ClapTrap::startQuotes[6] = {"Hey everybody! Check out my package!",
	"Let's get this party started!", "Glitching weirdness is a term of endearment, right?",
	"Recompiling my combat code!", "This time it'll be awesome, I promise!", 
	"Look out everybody! Things are about to get awesome!"};

const std::string ClapTrap::dieQuotes[7] = 
{ "Why do I even feel pain?!",
	"Why did they build me out of galvanized flesh?!",
	"Ow hohoho, that hurts! Yipes!","My robotic flesh! AAHH!",
		"Yikes! Ohhoho!", "Woah! Oh! Jeez!",
		"If only my chassis... weren't made of recycled human body parts! Wahahaha!"};

void	ClapTrap::selfPrint(void)
{
	std::cout << "[ClapTrap] " << this->name << ": ";
}

void	ClapTrap::print_attack(std::string target, std::string weapon, int damage) 
{
	this->selfPrint();
	std::cout <<  " attacks " << target << " " << weapon<< ", causing " << damage  << " points of damage !" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
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

ClapTrap::ClapTrap(std::string name,std::string className, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction) : name(name), className(className), hitPoints(hitPoints), maxHitPoints(maxHitPoints), energyPoints(energyPoints), maxEnergyPoints(maxEnergyPoints), level(level), meleeAttackDamage(meleeAttackDamage), rangedAttackDamage(rangedAttackDamage), armorDamageReduction(armorDamageReduction)
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%6] << " (new)"  << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	this->selfPrint();
	*this = src;
	return;
}

ClapTrap::ClapTrap(void) : name("ClapTrap"), hitPoints(100),
	maxHitPoints(100), energyPoints(100), level(1), meleeAttackDamage(30),
	rangedAttackDamage(20), armorDamageReduction(5)
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%6] << " (new)" << std::endl;
	return ;
}


ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(100),
	maxHitPoints(100), energyPoints(100), level(1), meleeAttackDamage(30),
	rangedAttackDamage(20), armorDamageReduction(5)
{
	this->selfPrint();
	std::cout << this->startQuotes[rand()%6] << " (new)" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	this->selfPrint();
	std::cout << this->dieQuotes[rand()%7]<< " (death) "  << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	this->print_attack(target, "with a bow", this->rangedAttackDamage);
}

void ClapTrap::meleeAttack(std::string const & target)
{
	this->print_attack( target, "at melee", this->meleeAttackDamage);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->selfPrint();
	amount -= (unsigned int)this->armorDamageReduction;
	amount = (int)amount > this->hitPoints ? this->hitPoints : amount;
	std::cout << " lose " << amount << " HP !" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->selfPrint();
	amount = (int)amount + this->hitPoints >  this->maxHitPoints ? this->maxHitPoints - this->hitPoints : amount;
	std::cout << " heal " << amount << " HP !" << std::endl;
	this->hitPoints += amount;
}

std::string	ClapTrap::getRandomTarget(void)
{
	return (this->randomEnnemies[rand()%37]);
}


