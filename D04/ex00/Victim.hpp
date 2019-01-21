/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:21:51 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:32:09 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
	public:

		Victim(void);
		Victim(const Victim & src);
		Victim(std::string name);
		~Victim(void);

		std::string getName(void) const;
		virtual void getPolymorphed(void) const;
		Victim & operator=(Victim const & src);
	private:
		std::string _name;

};

std::ostream & operator<<(std::ostream & o, Victim const & src);
#endif
