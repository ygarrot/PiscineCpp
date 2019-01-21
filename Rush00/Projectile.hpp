/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:43:19 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 19:16:45 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Projectile_HPP
# define Projectile_HPP


#include <iostream>
#include "AGameEntity.hpp"
class AGameEntity;
typedef struct s_pos t_pos;

class 					Projectile : public AGameEntity
{
	public:
		Projectile();
		Projectile(t_pos origin, t_pos direction);
		Projectile(t_pos origin);
		Projectile(std::string const & name, int damage);
		virtual ~Projectile();
		int	move(char ***map, t_pos limit, Dashboard *board);
		Projectile(Projectile const &src);

		Projectile & operator=(Projectile const & src);
		std::string getName() const;
		int getDamage() const;
		void             setDirection(t_pos newDirection); 
		t_pos             getDirection(void) const; 
		
	protected:
		t_pos _direction;
		std::string 	_name; 
		int				_damage;
};

#endif
