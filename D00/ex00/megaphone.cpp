/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 09:45:05 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/08 18:02:55 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

char	*strtoupper(char *str)
{
	int		length;

	for (length = strlen(str); length >= 0; length--)
		str[length] = toupper((int)(str[length]));
	return str;
}

int	 main(int ac, char **av)
{
	int 	i;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (i = 1; i < ac; i++)
	{
		std::cout << strtoupper(av[i]);
		std::cout << (i+1 < ac ? " " : "");
	}
	std::cout << std::endl;
	return 0;
}
