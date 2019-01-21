/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 11:45:57 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:17:15 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

	const std::string FragTrap::randomEnnemies[37] = {"Skag",
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
	
const std::string FragTrap::startQuotes[6] = {"Hey everybody! Check out my package!",
		"Let's get this party started!", "Glitching weirdness is a term of endearment, right?",
		"Recompiling my combat code!", "This time it'll be awesome, I promise!", 
		"Look out everybody! Things are about to get awesome!"};
	

void	FragTrap::print_attack(std::string target, std::string weapon, int damage) 
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " " << weapon<< ", causing " << damage  << " points of damage !" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
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

FragTrap::FragTrap(void) :  name("FragTrap"), hitPoints(100),
	maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), level(1), meleeAttackDamage(30),
	rangedAttackDamage(20), armorDamageReduction(15)
{
	
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	return;
}

FragTrap::FragTrap(std::string name) : name(name), hitPoints(100),
	maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), level(1), meleeAttackDamage(30),
	rangedAttackDamage(20), armorDamageReduction(15)
{
	std::cout << this->startQuotes[rand()%6] << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "I'll die the way I lived: annoying!" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	this->print_attack( target, " at ranged", this->rangedAttackDamage);
}

void FragTrap::meleeAttack(std::string const & target)
{
	this->print_attack( target, "at melee", this->meleeAttackDamage);
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount -= (unsigned int)this->armorDamageReduction;
	amount = (int)amount > this->hitPoints ? this->hitPoints : amount;
	std::cout << "FR4G-TP " << name << " lose " << amount << " HP !" << std::endl;
	this->hitPoints -= amount;
}

void FragTrap::beRepaired(unsigned int amount)
{
	amount = (int)amount + this->hitPoints >  this->maxHitPoints ? this->maxHitPoints - this->hitPoints : amount;
	std::cout << "FR4G-TP " << name << " heal " << amount << " HP !" << std::endl;
	this->hitPoints += amount;
}

std::string	FragTrap::getRandomTarget(void)
{
return (this->randomEnnemies[rand()%37]);
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
	this->energyPoints -= 25;
}
