/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 14:34:38 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/08 18:14:44 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#define CONTACT_NBR 8 
#include "contact.class.hpp"

class PhoneBook
{
	public:

	Contact		contact[CONTACT_NBR];
	void			search_contact(void);
	Contact *get_empty_contact(void);
};

#endif

