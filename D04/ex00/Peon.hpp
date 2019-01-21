/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:21:53 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:08:06 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim
{
	public:
		Peon(void);
		Peon(const Victim & src);
		Peon(std::string name);
		~Peon(void);

		Peon operator=(Victim const & src);
		void getPolymorphed(void) const;
	private:
		std::string _name;
};

#endif
