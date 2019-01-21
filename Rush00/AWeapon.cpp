/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:14:57 by jdavin            #+#    #+#             */
/*   Updated: 2019/01/13 19:31:09 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string name, int damage) {
    this->_name = name;
    this->_damage = damage;
}

AWeapon::AWeapon() : _damage(1)
{

}

AWeapon::~AWeapon() {

}

AWeapon::AWeapon(AWeapon const &src) {
    *this = src;
}

AWeapon     &AWeapon::operator=(AWeapon const & src) {
    this->_name = src._name;
    this->_damage = src._damage;
    return *this;
}

int         AWeapon::getDamage() const {
    return this->_damage;
}

std::string AWeapon::getName() const {
    return this->_name;
}
