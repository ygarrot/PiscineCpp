/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:51:37 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 11:21:27 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main (void)
{
	FragTrap fragTrap("Fraggy");
	ScavTrap scavTrap("Scavy");
	ScavTrap *scavtraptrap= new ScavTrap("traptrap");
	ScavTrap scavpoptrap = ScavTrap(scavTrap);
	FragTrap *traptrap = new FragTrap("traptrap");
	FragTrap poptrap = FragTrap(fragTrap);

	fragTrap.rangedAttack(fragTrap.getRandomTarget());
	fragTrap.meleeAttack(fragTrap.getRandomTarget());
	fragTrap.vaulthunter_dot_exe(fragTrap.getRandomTarget());
	fragTrap.vaulthunter_dot_exe(fragTrap.getRandomTarget());
	fragTrap.vaulthunter_dot_exe(fragTrap.getRandomTarget());
	fragTrap.vaulthunter_dot_exe(fragTrap.getRandomTarget());
	fragTrap.vaulthunter_dot_exe(fragTrap.getRandomTarget());
	fragTrap.vaulthunter_dot_exe(fragTrap.getRandomTarget());
	fragTrap.takeDamage(23);
	fragTrap.takeDamage(50);
	fragTrap.takeDamage(50);
	fragTrap.takeDamage(50);
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(24);
	fragTrap.takeDamage(50);

	scavTrap.rangedAttack(fragTrap.getRandomTarget());
	scavTrap.meleeAttack(fragTrap.getRandomTarget());
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	/* ScavTrap.vaulthunter_dot_exe(FragTrap.getRandomTarget()); */
	scavTrap.takeDamage(23);
	scavTrap.takeDamage(50);
	scavTrap.takeDamage(50);
	scavTrap.takeDamage(50);
	scavTrap.beRepaired(24);
	scavTrap.takeDamage(50);
	delete scavtraptrap;
	delete traptrap;
}
