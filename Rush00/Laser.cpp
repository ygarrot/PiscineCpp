/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Laser.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:47:58 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 18:33:12 by jdavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Laser.hpp"

Laser::Laser(std::string name, int damage) : AWeapon(name, damage){
	this->_projectile.setDirection((t_pos){1, 1});
}

Laser::~Laser() {

}

Laser::Laser(t_pos direction) :AWeapon() {
	this->_damage = 3;
	this->_name = "Laser";
	this->_projectile.setDirection((t_pos){1, 1});
	this->_direction = direction;
}

Laser::Laser(Laser const &src) : AWeapon(src){
    *this = src;
}

Laser     &Laser::operator=(Laser const & src) {
		AWeapon::operator=(src);
    return *this;
}

AGameEntity *Laser::attack(t_pos origin) const
{
		return new Projectile(origin, this->_direction);
}
