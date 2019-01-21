/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:55:10 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:14:04 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PLASMARIFFLE_HPP
#define PLASMARIFFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		virtual void attack() const;
		PlasmaRifle(PlasmaRifle const &src);
		~PlasmaRifle(void);
		/* PlasmaRifle & operator=(PlasmaRifle const & src); */
		PlasmaRifle(void);

		PlasmaRifle(std::string const & name, int apcost, int damage);

	private:

};

#endif
