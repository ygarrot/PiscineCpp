/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:08:50 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 15:43:27 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"

#include <iostream>

class Character
{
	private:
		std::string _name;
		int _ap;
		AWeapon *_weapon;
		
	public:
			Character(std::string const & name);
				~Character(void);
			void recoverAP();
			void equip(AWeapon*);
			void attack(Enemy*);
			std::string getName(void) const;
			AWeapon *getWeapon(void) const;
			int	getAP(void) const;
			
			Character(Character const &src);
			Character & operator=(Character const & src);
			Character(void);
};

std::ostream & operator<<(std::ostream  & o, Character const & rhs);
#endif
