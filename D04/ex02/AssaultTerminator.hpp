/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 21:51:48 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 21:54:15 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
		 ~AssaultTerminator();
		 AssaultTerminator* clone() const;
		 void battleCry() const;
		 void rangedAttack() const;
		 void meleeAttack() const;

		AssaultTerminator(AssaultTerminator const &src);
		AssaultTerminator & operator=(AssaultTerminator const & src);
		AssaultTerminator(void);
	private:
};

#endif
