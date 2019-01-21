/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:27:12 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 19:16:45 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACHARACTER_HPP
#define ACHARACTER_HPP

#include "AGameEntity.hpp"
#include "AWeapon.hpp"
#include "Laser.hpp"
#include <iostream>

class 					ACharacter : public AGameEntity
{
	public:
		ACharacter();
		~ACharacter(void);
		ACharacter(ACharacter const &src);

		ACharacter 		&operator=(ACharacter const & src);
		void			takeDamage(int dmge);
		int				getHp(void) const;
		void	displayInfo(WINDOW *info) ;
		std::string 	getName(void) const;
		void			equip(AWeapon const &weapon);
		AWeapon			*getWeapon(void) const;
		AGameEntity 	*attack(void);

	private:

	protected:
		int				_score;
		int				_hp;
		std::string _name;
		AWeapon 		*_weapon;
};

#endif
