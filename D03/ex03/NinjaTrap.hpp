/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:21:23 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 11:34:01 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class NinjaTrap : public ClapTrap
{
	public:

		void ninjaShoebox(ClapTrap & bot);
		void ninjaShoebox(FragTrap & bot);
		void ninjaShoebox(ScavTrap & bot);
		void ninjaShoebox(NinjaTrap & bot);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		NinjaTrap(void);
		~NinjaTrap(void);
		NinjaTrap & operator=(NinjaTrap const & rhs);

	private:
		static const std::string startQuotes[11];
		void	selfPrint(void);
		static const std::string dieQuotes[8];

};

#endif
