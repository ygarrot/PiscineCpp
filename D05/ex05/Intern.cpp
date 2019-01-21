/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 21:50:10 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 22:35:03 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() 
{

}

Intern::~Intern() 
{

}

Intern::Intern(Intern const &src) 
{
	*this = src;
}

Intern     &Intern::operator=(Intern const & src) 
{
	(void)src;
	return *this;
}

Form *Intern::makeRobo(std::string const & name) const
{
	return new RobotomyRequestForm(name);
}

Form *Intern::makePresident(std::string const & name) const
{
	return new PresidentialPardonForm(name);
}

Form *Intern::makeShrub(std::string const & name) const
{
	return new ShrubberyCreationForm(name);
}

Form *Intern::makeForm(std::string const & form, std::string const & target) const
{
	Form *ret = NULL;
	typedef struct s_form { std::string const & name;  Form *(Intern::*Form)(std::string const & target) const;} t_form;
	t_form formDic[3]= 
	{	{"Robotomy Request", &Intern::makeRobo},  
		{"Presidential Pardon", &Intern::makePresident},	
		{"Shrubbery Creation", &Intern::makeShrub}};

	for (int index = 0; index < 3 && !ret; index++)
	{
		if (formDic[index].name == form)
			ret = (this->*(formDic[index].Form))(target);
	}
	if (ret)
		std::cout << "Intern creates " << ret->getName() << std::endl;
	else
		std::cout << "Intern couldn't creates form" << form << " with name " << target << std::endl;
	return ret;
}
