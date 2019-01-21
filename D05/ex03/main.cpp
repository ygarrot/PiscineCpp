/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 12:33:14 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 17:45:05 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

class jcvd;

int	main(void)
{
	Intern jeanne;
	Bureaucrat theBoss("TheBoss", 1);
	Bureaucrat jcvd("jcvd", 150);
	Form *rff;

	rff = jeanne.makeForm("Robotomy Request", "jacques");
	jcvd.signForm(*rff);
	theBoss.signForm(*rff);
	theBoss.executeForm(*rff);
	jcvd.executeForm(*rff);

	delete rff;
	rff = jeanne.makeForm("Presidential Pardon", "jacques");
	jcvd.signForm(*rff);
	theBoss.signForm(*rff);
	theBoss.executeForm(*rff);
	jcvd.executeForm(*rff);
	delete rff;
	rff = jeanne.makeForm("Shrubbery Creation", "jacques");
	jcvd.signForm(*rff);
	theBoss.signForm(*rff);
	theBoss.executeForm(*rff);
	jcvd.executeForm(*rff);
	delete rff;
	rff = jeanne.makeForm("cava pas marcher laisse tomber", "jacques");
	delete rff;
	

}
