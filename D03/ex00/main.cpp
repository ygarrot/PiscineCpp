/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 12:51:37 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 11:15:19 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main (void)
{
	FragTrap fragTrap("Fraggy");
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
	poptrap.takeDamage(23);
	delete traptrap;
}
