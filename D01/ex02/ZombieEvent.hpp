/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 10:39:18 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 19:03:06 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);
		void	setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void		randomChump(void);
	private:
		std::string _type;
};
#endif
