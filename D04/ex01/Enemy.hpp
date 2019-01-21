/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:45:19 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:35:53 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
	protected:
		int	_hp;
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
