
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:55:10 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 14:41:33 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		virtual void attack() const;
		PowerFist(PowerFist const &src);
		~PowerFist(void);
		/* PowerFist & operator=(PowerFist const & src); */
		PowerFist(void);

		PowerFist(std::string const & name, int apcost, int damage);

	private:

};

#endif
