/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:07:39 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 11:11:50 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(int ac, char **av)
{
	ZombieEvent event;
	Zombie *samantha;
	Zombie edouard("edouard", "lazy");

	(void)ac;
	(void)av;
	edouard.announce();
	event.randomChump();
	event.setZombieType("doomed");
	samantha = event.newZombie("samantha");
	samantha->announce();
	delete samantha;
	return 0;
}
