/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 21:26:47 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 22:42:44 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & src);
		SuperTrap(void);
		~SuperTrap(void);
		SuperTrap & operator=(SuperTrap const & rhs);
		std::string	name;
		int level;
		using FragTrap::hitPoints;
		using FragTrap::maxHitPoints;
		using FragTrap::rangedAttackDamage;
		using FragTrap::rangedAttack;
		using NinjaTrap::energyPoints;
		using NinjaTrap::maxEnergyPoints;
		using NinjaTrap::meleeAttackDamage;
		using NinjaTrap::meleeAttack;

private:
		void	selfPrint(void);
		static const std::string startQuotes[11];
		static const std::string dieQuotes[8];
};

#endif

