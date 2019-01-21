/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Laser.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:42:35 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 18:33:10 by jdavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Laser_HPP
#define Laser_HPP

#include <iostream>
#include "AGameEntity.hpp"
#include "Projectile.hpp"
#include "AWeapon.hpp"

class Laser : public AWeapon
{
	public:
		Laser(std::string name, int damage);
		virtual ~Laser();
		Laser(t_pos direction);
		Laser(Laser const &src);

		Laser & operator=(Laser const & src);
		AGameEntity 	*attack(t_pos origin) const;

	private:
	protected:
		t_pos 		_direction;
};

#endif
