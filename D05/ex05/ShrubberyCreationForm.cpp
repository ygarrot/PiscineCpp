/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:51:49 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/14 21:30:09 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 25, 5), _target(target){

}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 25, 5), _target("bob") 
{

}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : _target(src._target){
	*this = src;
}

ShrubberyCreationForm     &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
	(void)src;
	return *this;
}

void	ShrubberyCreationForm::executeForm(Bureaucrat const & executor) const
{
(void)executor;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
