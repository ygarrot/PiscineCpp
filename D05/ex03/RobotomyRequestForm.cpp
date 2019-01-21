/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 17:53:36 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/14 21:45:18 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("bob") 
{

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
	*this = src;
}

RobotomyRequestForm     &RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
	(void)src;
	return *this;
}

void	RobotomyRequestForm::executeForm(Bureaucrat const & executor) const
{
	(void)executor;
	std::srand(std::time(nullptr));
	int	rand = std::rand()%2;
	for (int i = 0; i < 420; i++)
		std::cout << '\a';

	if (rand)
		std::cout << this->_target + " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target + " robotomization is a failure" << std::endl;
}
