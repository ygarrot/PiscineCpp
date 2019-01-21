/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 15:27:34 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 11:12:55 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "One Punching this " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "shooting arrows at " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "spit on " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	typedef struct temp { std::string kind;  void (Human::*Attack)(std::string const & target);} t_temp;
	t_temp dict[3] = {{"melee", &Human::meleeAttack},
		{ "ranged", &Human::rangedAttack},
		{ "harmless", &Human::intimidatingShout}};
	for (int i = 0; i < 3 ; i++)
		if (!dict[i].kind.compare(action_name))
		{
			(this->*(dict[i].Attack))(target);
			return ;
		}
}
