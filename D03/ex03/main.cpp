/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:51:37 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 11:33:25 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int	main (void)
{
	FragTrap fragTrap("Fraggy");
	ScavTrap scavTrap("Scavy");
	ClapTrap claptrap("clappy");
	NinjaTrap ninjatrotrap("ninjaaaa");
	ScavTrap *scavtraptrap= new ScavTrap("traptrap");
	ScavTrap scavpoptrap = ScavTrap(scavTrap);
	FragTrap *traptrap = new FragTrap("traptrap");
	FragTrap poptrap = FragTrap(fragTrap);
	ClapTrap *clapotrap = new ClapTrap("clapotrap");
	ClapTrap copytrap = ClapTrap(claptrap);
	NinjaTrap *ninjatrap = new NinjaTrap("clapotrap");
	NinjaTrap clonetrap = NinjaTrap(ninjatrotrap);


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

	copytrap.rangedAttack(fragTrap.getRandomTarget());
	copytrap.meleeAttack(fragTrap.getRandomTarget());
	copytrap.takeDamage(23);
	copytrap.takeDamage(50);
	copytrap.takeDamage(50);
	copytrap.takeDamage(50);
	copytrap.takeDamage(50);
	copytrap.beRepaired(24);
	copytrap.takeDamage(50);

	ninjatrotrap.takeDamage(23);
	ninjatrotrap.takeDamage(50);
	ninjatrotrap.takeDamage(50);
	ninjatrotrap.takeDamage(50);
	ninjatrotrap.beRepaired(24);
	ninjatrotrap.takeDamage(50);

	ninjatrotrap.rangedAttack(fragTrap.getRandomTarget());
	ninjatrotrap.meleeAttack(fragTrap.getRandomTarget());
	ninjatrotrap.ninjaShoebox(claptrap);
	ninjatrotrap.ninjaShoebox(fragTrap);
	ninjatrotrap.ninjaShoebox(scavTrap);
	ninjatrotrap.ninjaShoebox(ninjatrotrap);
	delete scavtraptrap;
	delete traptrap;
	delete clapotrap;
	delete ninjatrap;

}
