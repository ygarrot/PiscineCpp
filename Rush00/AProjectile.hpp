/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AProjectile.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:25:42 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/12 15:03:45 by jdavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AProjectile_HPP
# define AProjectile_HPP

#include <iostream>
#include "AGameEntity.hpp"

class 					AProjectile : AGameEntity
{
	public:
		AProjectile();
		AProjectile(std::string const & name, int damage);
		virtual ~AProjectile();
		AProjectile(AProjectile const &src);

		AProjectile & operator=(AProjectile const & src);
		std::string getName() const;
		int getDamage() const;
		
	protected:
		std::string 	_name; 
		int				_damage;
};

#endif
