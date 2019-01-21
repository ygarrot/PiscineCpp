/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 11:39:42 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:17:38 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
class FragTrap
{
	public:

		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap(void);
		~FragTrap(void);

		std::string getRandomTarget(void);
		void	print_attack(std::string name, std::string weapon, int damage);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		FragTrap & operator=(FragTrap const & rhs);
		static const std::string randomEnnemies[37];
		void vaulthunter_dot_exe(std::string const & target);
	private:
		static const std::string startQuotes[6];
		std::string	name;
		int	hitPoints;
		int	maxHitPoints;
		int	energyPoints; 
		int	maxEnergyPoints;
		int	level;
		int	meleeAttackDamage;
		int	rangedAttackDamage;
		int	armorDamageReduction;
};

#endif
