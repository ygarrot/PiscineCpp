/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 11:44:56 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/07 21:38:30 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact(void);
		int		is_free;
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		void	display_info(void);
		void	add(void);

	private: 
		std::string Login;
		std::string PostalAddress;
		std::string EmailAddress;
		std::string PhoneNumber;
		std::string BirthdayDate;
		std::string FavoriteMeal;
		std::string UnderwearColor;
		std::string DarkestSecret;
};

#endif
