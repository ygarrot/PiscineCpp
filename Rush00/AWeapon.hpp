/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:02:37 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/12 22:13:45 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWeapon_HPP
#define AWeapon_HPP

#include <iostream>
#include "AGameEntity.hpp"
#include "Projectile.hpp"

class AWeapon
{
	public:
		AWeapon(std::string name, int damage);
		virtual ~AWeapon();
		AWeapon(void);
		AWeapon(AWeapon const &src);

		AWeapon & operator=(AWeapon const & src);
		std::string  	getName() const;
		int 			getDamage() const;
		//must be virtual
		virtual AGameEntity 	*attack(t_pos origin) const = 0;

	protected:
		std::string _name;
		int 		_damage;
		//ATM there can only be one projectile
		Projectile _projectile;
};

#endif
