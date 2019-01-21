/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:21:55 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 13:15:39 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	public:
		std::string getTitle(void) const;
		std::string getName(void) const;
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer(Sorcerer const &src);
		Sorcerer & operator=(Sorcerer const & src);
		void polymorph(Victim const &) const;

	private:
		std::string _name;
		std::string _title;
		Sorcerer(void);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & src);

#endif
