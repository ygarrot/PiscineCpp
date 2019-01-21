/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 21:53:16 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/14 23:13:20 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class 					Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const &src);

		Form *makeRobo(std::string const & name) const;
			Form *makePresident(std::string const & name) const;
			Form *makeShrub(std::string const & name) const;
			Form *makeForm(std::string const & form, std::string const & target) const;
		Intern 		&operator=(Intern const & src);
};
/* std::ostream 		&operator<<(std::ostream & o, Intern const & src); */

#endif
