/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:47:25 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/14 21:30:09 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <stdexcept>
#include <iostream>
#include "Form.hpp"

class Form;

class 					RobotomyRequestForm : public Form
{
	public:
		~RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);

		RobotomyRequestForm 		&operator=(RobotomyRequestForm const & src);
		void	executeForm(Bureaucrat const & executor) const;
	private:
		std::string _target;
		RobotomyRequestForm(void);
};
/* std::ostream 		&operator<<(std::ostream & o, RobotomyRequestForm const & src); */

#endif
