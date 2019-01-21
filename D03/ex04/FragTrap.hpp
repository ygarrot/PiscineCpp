/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 11:39:42 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 22:39:10 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap 
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap(void);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);
		void vaulthunter_dot_exe(std::string const & target);

	private:
		void	selfPrint(void);
		static const std::string startQuotes[11];
		static const std::string dieQuotes[8];
};

#endif
