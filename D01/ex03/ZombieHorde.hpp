/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 21:40:16 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 10:55:01 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDER_HPP
#define ZOMBIEHORDER_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	public:
		Zombie *horde;
		ZombieHorde(int ZombieNumber);
		~ZombieHorde(void);
		void		announce();
	private:
		int	zombieNumber;

};

#endif
