/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:09:03 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/08 18:33:52 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <string.h>

int		main()
{
	PhoneBook PhoneBook;
	Contact *contact;
	std::string command;

	while (command.compare("EXIT"))
	{
		std::cin >> command;
		if (!command.compare("ADD"))
		{
			if ((contact = PhoneBook.get_empty_contact()) != NULL)
				contact->add();
			else
				std::cout << "the PhoneBook is full, sorry" << std::endl;
		}
		else if (!command.compare("SEARCH"))
			PhoneBook.search_contact();
	}
}

