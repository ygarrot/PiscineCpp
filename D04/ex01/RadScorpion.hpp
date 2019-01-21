/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:05:50 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:17:16 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(RadScorpion const &src);
		void takeDamage(int value);
		~RadScorpion(void);
		/* RadScorpion & operator=(RadScorpion const & src); */
		RadScorpion(void);

		RadScorpion(std::string const & name, int apcost, int damage);

	private:

};

#endif
