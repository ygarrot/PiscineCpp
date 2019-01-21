/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:57:00 by jdavin            #+#    #+#             */
/*   Updated: 2019/01/13 23:27:22 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ACharacter.hpp"

ACharacter::ACharacter(): _score(0), _hp(1){

    this->_type = "Character";
	this->_hitboxSize[Y]=1;
	this->_hitboxSize[X]=1;
	this->_hitbox[0][0] = '&';
	this->_position.x = 0;
	this->_position.y = 0;
}

ACharacter::~ACharacter(void) {
    delete this->_weapon;
}

ACharacter::ACharacter(ACharacter const &src) {
    *this = src;
}

void	ACharacter::displayInfo(WINDOW *info)
{
    (void)info;
    /* mvwprintw(info, 2, (COLS *4) /5, "hp:%d score:%d", this->_hp, this->_score); */  
}


ACharacter      &ACharacter::operator=(ACharacter const & src) {
    AGameEntity::operator=(src);
    this->_name = src._name;
    this->_hp = src._hp;
    this->_weapon = src._weapon;
    return *this;
}

void	        ACharacter::takeDamage(int dmge) {
    if (dmge > 0)
        this->_hp -= dmge < this->_hp ? dmge : this->_hp;
}

int				ACharacter::getHp(void) const {
    return this->_hp;
}

std::string 	ACharacter::getName(void) const {
    return this->_name;
}

void			ACharacter::equip(AWeapon const & weapon) {
    *this->_weapon = weapon;
}

AWeapon			*ACharacter::getWeapon(void) const {
    return this->_weapon;
}

AGameEntity *ACharacter::attack(void)
{
    return this->_weapon->attack(this->_position);
}
