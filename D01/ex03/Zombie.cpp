/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 10:59:14 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 11:06:46 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int Zombie::number = 0;

Zombie::Zombie(std::string Name, std::string type) : type(type), name(Name)
{
	std::cout << this->name << " is coming" << std::endl;
	Zombie::number++;
	this->index = Zombie::number;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " run away";
	std::cout << std::endl;
}

Zombie::Zombie(void)
{
	std::string name_list[30] = {"Zahara","Zandra","Zaneta","Zara","Zarah",
		"Zaria","Zarla","Zea","Zelda","Zelma","Zena","Zenia","Zia","Zilvia",
		"Zita","Zitella","Zoe","Zola","Zonda","Zondra","Zonnya","Zora",
		"Zorah","Zorana","Zorina","Zorine","Zsa Zsa","Zsazsa","Zulema","Zuzana"};

	Zombie::number++;
	srand(time(0));
	this->name = name_list[(rand() + Zombie::number)%30];
	this->index = Zombie::number;
	std::cout << this->name << " is coming" << std::endl;
	this->type = "Hungry";
}

void	Zombie::announce(void)
{
	std::string moan[135] = {"Gagarzzaahn", "G!nz!nzaahn", "Garzbang", "Raz", "Bahnbanana", "Az",
		"Bahnbanana", "Rambarg", "H!hhz", "Ghanzarbanana", "Arrzaahn", "Rhazrh!nbang", "Guzgan",
		"Rahbanana", "Gahgzbanana", "Gaggambgan", "Zhaggrbang", "Ragagan", "M!rran", "H!hhz",
		"Ra!nz", "H!hhz", "Bazhangan", "Rahg", "Haagz", "Bazgagzaagh", "Baggazgan", "Brh!hhagz",
		"Ghagrh!gan", "Garzahh", "Haagz", "-!zanbah", "Braahg", "H!hhz", "Zhaarbang", "Hahnrah", 
		"Haagz", "Zangrb!rrh", "G!bzangan", "Dann!ngbanana", "Ganarh", "H!hhz", "Raz", "Bagzaahn",
		"Az", "Bagzaahn", "Rh!gzman", "H!hhz", "G!ghrhbang", "Ragzhzaahn", "Ranzraabang", "Hahgan",
		"Zbragrh!ngbang", "Banghargan", "Ahzrahbang", "Marhbang", "Rag!nzbanana", "Habrahgrahb", "Barhahb!rrh",
		"Ragrabang", "B!mbang", "B!bbarb!rrh", "B!gnahbang", "Zgarrh!ngzaahn", "Grh!gg", "Haagz", "Raganbang",
		"Harm!hh", "Haagz", "Zharh", "H!hhz", "Gaabrab", "H!hhz", "Zganbara", "B!hhagz", "Rahzbanana", "Aghzgambh",
		"Barhah-Raz", "Ganganzaagh", "Graaghgan", "Marn!nggan", "Narh", "Brh!ghb!rrh", "Braagzb!rrh", "Magragz", "Haagz",
		"Zhaggrb!rrh", "Garrh!gan", "Graabang", "B!nzaahn", "Hahbanbang", "N!gzbang", "Rh!ghbanana", "Zah", "Brh!ghb!rrh",
		"Graanzaahn", "Gabgan", "Gamzgarhbang", "Rah", "Haagz", "Gahzanzaagh", "Azmanb!rrh", "B!nnah", "Haagz", "Bahgz",
		"Brh!hhagz", "Rhagrbang", "Raggahhzaagh", "Garzaagh", "G!ngh", "Haagz", "Raz", "Grahzaagh", "Az", "Grahzaagh",
		"Zgarhagbanana", "B!nnb!rrh", "Rh!rarbang", "Nah", "Argham", "Arrh", "Argham", "Zb!zarh", "H!hhz", "Arramzbrh!hh", 
		"Bagganb!rrh", "Rh!gh", "H!hhz", "Harramzaahn", "Gamgarzbang", "Agganzaagh", "M!rzaahn::`"};

	std::cout << this->name << ": " << moan[rand() %134];
	std::cout << std::endl;
}
