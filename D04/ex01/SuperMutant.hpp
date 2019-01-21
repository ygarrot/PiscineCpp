/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:54:17 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 16:18:21 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(SuperMutant const &src);
		void takeDamage(int value);
		~SuperMutant(void);
		/* SuperMutant & operator=(SuperMutant const & src); */
		SuperMutant(void);

		SuperMutant(std::string const & name, int apcost, int damage);

	private:

};

#endif
