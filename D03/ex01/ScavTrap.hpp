/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:31:14 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 11:04:09 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
class ScavTrap 
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap(void);
		~ScavTrap(void);

		std::string getRandomTarget(void);
		void	print_attack(std::string name, std::string target, int damage);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void	challengeNewcomer(void);
		ScavTrap & operator=(ScavTrap const & rhs);
		static const std::string randomEnnemies[37];

	private:
			std::string	name;
		int	hitPoints;
		int	maxHitPoints;
		int	energyPoints; 
		int	maxEnergyPoints;
		int	level;
		int	meleeAttackDamage;
		int	rangedAttackDamage;
		int	armorDamageReduction;
		static const std::string startQuotes[6];
		static const std::string challengeQuotes[5];
};
#endif
