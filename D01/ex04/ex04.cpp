/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:44:05 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/09 19:14:37 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string strptr;
	std::string& strref = strptr;

	strptr = "HI THIS IS BRAIN";
	std::cout << "strptr: " << strptr << std::endl;
	std::cout << "strref: " << strref << std::endl;

	return 0;
}
