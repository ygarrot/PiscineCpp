/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 10:36:12 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 19:13:27 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <stdio.h>
#include <iostream>

class	Zombie
{

	public:
	Zombie(std::string name, std::string type);
	~Zombie(void);
	int		index;
	void	announce(void);
	private:
	std::string type;
	std::string	name;
	static int ZombieNumber;
};

#endif
