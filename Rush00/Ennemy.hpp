/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ennemy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 15:53:34 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 15:56:44 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include "ACharacter.hpp"

class Enemy : ACharacter
{
	protected:
		std::string _type;

	public:
			Enemy(int hp, std::string const & type);
			virtual ~Enemy(void);
			std::string getType(void) const;
			int getHP(void) const;
			virtual void takeDamage(int);

			Enemy(Enemy const &src);
			Enemy & operator=(Enemy const & src);
			Enemy(void);

};

#endif
