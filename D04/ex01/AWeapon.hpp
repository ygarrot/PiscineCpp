/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:41:30 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:08:46 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWeapon_HPP
#define AWeapon_HPP

#include <iostream>

class AWeapon
{
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		std::string  getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
		
		AWeapon(AWeapon const &src);
		AWeapon & operator=(AWeapon const & src);
		AWeapon(void);

	protected:
		std::string _attackOutput;
		std::string _name; 
		int _APCost;
		int	_damage;
};

#endif
