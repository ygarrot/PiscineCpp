/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 17:51:47 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/14 21:32:54 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <stdexcept>
#include <iostream>
#include "Form.hpp"
#include <fstream>

class 					PresidentialPardonForm : public Form
{
	public:
		~PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		void	executeForm(Bureaucrat const & executor) const;
		PresidentialPardonForm(PresidentialPardonForm const &src);

		PresidentialPardonForm 		&operator=(PresidentialPardonForm const & src);
	private:
		std::string _target;
		PresidentialPardonForm(void);
};
/* std::ostream 		&operator<<(std::ostream & o, PresidentialPardonForm const & src); */

#endif
