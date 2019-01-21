/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:31:14 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 17:41:33 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & rhs);
		void	challengeNewcomer(void);
	private:
		static const std::string startQuotes[11];
		static const std::string challengeQuotes[5];
		void	selfPrint(void);
		static const std::string dieQuotes[15];
};
#endif
