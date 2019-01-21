/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:43:47 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 12:02:42 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:

		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		ClapTrap(void);
		ClapTrap(std::string name, std::string className, int hitPoints, int maxHitPoints, int energyPoints,
				int maxEnergyPoints, int level, int meleeAttackDamage, 
				int rangedAttackDamage, int armorDamageReduction);
		~ClapTrap(void);

		std::string	name;
		std::string className;
	int	hitPoints;
		int	maxHitPoints;
		int	energyPoints; 
		int	maxEnergyPoints;
		int	level;
		int	meleeAttackDamage;
		int	rangedAttackDamage;
		int	armorDamageReduction;
		std::string getRandomTarget(void);
		void	selfPrint(void);
		void	print_attack(std::string target, std::string weapon, int damage);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap & operator=(ClapTrap const & rhs);
		static const std::string randomEnnemies[37];

	private:
			static const std::string startQuotes[6];
		static const std::string dieQuotes[7];
};


#endif
