/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 15:57:08 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 11:13:08 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void)
{
		Human you;

		you.action("harmless", "joseph");
		you.action("melee", "jhon");
		you.action("ranged", "shaia");
		you.action("e", "e");
		you.action("", "");
}
