/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 09:58:09 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 18:58:47 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <iomanip> 

void	ponyOnTheHeap(void);
void	ponyOnTheStack(void);

class Pony
{
	public:
		std::string Name;
		Pony(std::string Name);
		~Pony(void);
};

#endif
