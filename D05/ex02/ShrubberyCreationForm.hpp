/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:52:53 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/14 21:30:09 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <stdexcept>
#include <iostream>
#include "Form.hpp"

class 					ShrubberyCreationForm : public Form
{
	public:
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		void	executeForm(Bureaucrat const & executor) const;
		ShrubberyCreationForm(ShrubberyCreationForm const &src);

		ShrubberyCreationForm 		&operator=(ShrubberyCreationForm const & src);
	private:
		std::string _target;
		ShrubberyCreationForm(void);
};
/* std::ostream 		&operator<<(std::ostream & o, ShrubberyCreationForm const & src); */

#endif
