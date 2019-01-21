/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 22:41:00 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 23:36:23 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:33:01 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/15 22:40:46 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

int main()
{
	std::string randomName[] = {
		"Paulette Jose",
		"Willene Benway",
		"Marcell Fraga",
		"Joie Fiorini",
		"Will Harbour",
		"Dorethea Swingle",
		"Marion Streeter",
		"Kristy Fager",
		"Elvis Mcinnis",
		"Cecilia Angelo",
		"Marni Vaillancourt",
		"Evie Halter",
		"Sanford Maus",
		"Vanna Beatrice",
		"Tommie Turnbull",
		"Heather Stehle",
		"Dallas Vivanco",
		"Tasia Kanode",
		"Concha Pattillo",
		"Yan Viau",
		"Tracy Nord",
		"Malik Hohn",
		"Andree Crittendon",
		"Dede Guida",
		"Flor Brasel",
		"Ione Pillot",
		"Babette Addy",
		"Noella Blackshire",
		"Irving Mayes",
		"Lala Mogan",
		"Contessa Trembath",
		"Gianna Montalbo",
		"Lauretta Rustin",
		"Karmen Slawson",
		"Pura Mattison",
		"Brant Renfrew",
		"Antonette Gabrielson",
		"Angelyn Campa",
		"Jesse Straker",
		"Ligia Berry",
		"Mitsue Frink",
		"Mozelle Goertz",
		"Connie Guel",
		"Ehtel Neumeister",
		"Peg Wenrich",
		"Rosanna Woody",
		"Lou Wahlen",
		"Deena Knapp",
		"Ralph Courson",
		"Lavona Paetzold"};

	CentralBureaucracy centralBureaucracy;
	Bureaucrat **bureaucrat;
	bureaucrat = new Bureaucrat*[40];

	bool isNotFull =true;
	for (int i = 0; i < 40; i++)
	{
		while (isNotFull)
		{
			try{
				int rando = rand();
				bureaucrat[i] = new Bureaucrat(randomName[rando % 40], abs(rando)%152);	
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}

			if (!(bureaucrat[i]))
					continue;
			try{
				centralBureaucracy.feed(*bureaucrat[i]);
			}
			catch (CentralBureaucracy::FullOfficeException &e)
			{
				isNotFull = false;
				std::cout << e.what() << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
		isNotFull =true;
	}
	centralBureaucracy.doBureaucracy();
}
