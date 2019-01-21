/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 11:19:19 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/08 18:14:18 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "contact.class.hpp"
#include "PhoneBook.class.hpp"

Contact::Contact(void)
{
	this->is_free = 1;
}

void	gentle_print(std::string string)
{
	std::cout << "please give me your " << string << std::endl;
}

void	Contact::add(void)
{
	gentle_print("First Name");
	std::cin >> this->FirstName;
	gentle_print("Last Name");
	std::cin >> this->LastName;
	gentle_print("Nickname");
	std::cin >> this->Nickname;
	gentle_print("Postal Adress");
	std::cin >> this->PostalAddress;
	gentle_print("Email Address");
	std::cin >> this->EmailAddress;
	gentle_print("Phone Number");
	std::cin >> this->PhoneNumber;
	gentle_print("Birthday Date");
	std::cin >> this->BirthdayDate;
	gentle_print("Favorite Meal");
	std::cin >> this->FavoriteMeal;
	gentle_print("Underwear Color");
	std::cin >> this->UnderwearColor;
	gentle_print("Darkest Secret");
	std::cin >> this->DarkestSecret;
	this->is_free = 0;
}

