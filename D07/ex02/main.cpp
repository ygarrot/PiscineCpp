/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 14:11:51 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 20:58:28 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array <int>t;
	Array <int>t10(10);
	Array <int>t11(11);
	Array <int>t10bis(t10);
	Array <std::string>tab(10);

	std::cout << "t.size(): " << t.size() << std::endl;
	std::cout << t10.size() << std::endl;
	std::cout << t10[0] << std::endl;
	t10[0] = 2;
	std::cout << "t10 + 2: " << t10[0] << std::endl;
	std::cout << "t10bis after assignation: " << t10bis[0] << std::endl;
	t10bis = t10;
	std::cout << "t10bis = t10: " << t10[0] << std::endl;
	std::cout << "t10bis after assignation: " << t10bis[0] << std::endl;
	std::cout << "t10 size:" << t10.size() << std::endl;
	std::cout << "t11 size:" << t11.size() << std::endl;
	std::cout << "t10[0]: " << t10[0] << std::endl;
	std::cout << "t11[0]: " << t11[0] << std::endl;
	t11 = t10;
	std::cout << "~~~~~~~~~ t11 = t10" <<std::endl;
	std::cout << "t10 size:" << t10.size() << std::endl;
	std::cout << "t11 size:" << t11.size() << std::endl;
	std::cout << "t10[0]: " << t10[0] << std::endl;
	std::cout << "t11[0]: " << t11[0] << std::endl;
	try
	{
		std::cout << t10[10] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << t10[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << tab[9];
	try
	{
		tab[9] = "test array";
		std::cout << tab[9] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
}
