/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 10:36:12 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 10:47:12 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{

	public:
		Zombie(std::string name, std::string type);
		int index;
		~Zombie(void);
		Zombie(void);
		void	announce(void);
	private:
		static int number;
		std::string type;
		std::string	name;
};

#endif
