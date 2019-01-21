/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 19:12:53 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 21:53:13 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>


class TacticalMarine : public ISpaceMarine
{
	public:
		 ~TacticalMarine();
		 TacticalMarine* clone() const;
		 void battleCry() const;
		 void rangedAttack() const;
		 void meleeAttack() const;

		TacticalMarine(TacticalMarine const &src);
		TacticalMarine & operator=(TacticalMarine const & src);
		TacticalMarine(void);
	private:

};

#endif
