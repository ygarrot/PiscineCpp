/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:08:39 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/08 18:11:12 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "contact.class.hpp"
#include <iostream>
#include <string>
#include <iomanip> 
#include <stdio.h>
#include <string.h>

void	formatted_diplay(std::string string)
{
	char formatted_string[12];

	strncpy(formatted_string, string.c_str(), 9);
	if (string.length() > 10)
		formatted_string[9] = '.';
	std::cout<< std::setw(10) << formatted_string  << '|';
}

void	Contact::display_info(void)
{
	formatted_diplay(this->FirstName);
	formatted_diplay(this->LastName);
	formatted_diplay(this->Nickname);
	std::cout << std::endl;
}

inline bool isInteger(const std::string & s)
{
	if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;

	char * p;
	strtol(s.c_str(), &p, 10);
	return (*p == 0);
}

void	PhoneBook::search_contact(void)
{
	std::string	user_choice;
	int		index;

	for (index = 0; index < CONTACT_NBR  && !this->contact[index].is_free; index++)
	{
		std::cout << '|';
		formatted_diplay(std::to_string(index));
		this->contact[index].display_info();
	}
	std::cin >> user_choice;
	if (!isInteger(user_choice)  || (index = std::stoi(user_choice, 0, 10)) < 0 
				||index >CONTACT_NBR)
	{
			std::cout << "Please give me a number between 0 and 8" << std::endl;
			return ;
	}
	if (!this->contact[index].is_free)
	{
		std::cout << '|';
		formatted_diplay(std::to_string(index));
		this->contact[index].display_info();
		return ;
	}
	std::cout << "Check if that index is valid" << std::endl;
}

Contact*	PhoneBook::get_empty_contact(void)
{
	int index;

	index = 0;
	while (index < CONTACT_NBR && !this->contact[index].is_free)
		index++;
	if (index < CONTACT_NBR && this->contact[index].is_free)
		return (&this->contact[index]);
	return (NULL);
}

