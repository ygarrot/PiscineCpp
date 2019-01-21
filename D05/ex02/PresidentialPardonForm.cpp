/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:53:30 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/14 19:00:10 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 145, 137), _target(target){

}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 145, 137), _target("bob") 
{

}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : _target(src._target){
	*this = src;
}

PresidentialPardonForm     &PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
	(void)src;
	return *this;
}

void	PresidentialPardonForm::executeForm(Bureaucrat const & executor) const 
{
	std::ofstream file;

	(void)executor;
	file.open(this->_target + "_shrubbery");
	if (!file.is_open())
		return ;
	for (int trees = 0 ; trees < 3; trees++)
	{
file <<"               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n\n\n";
	}
}
