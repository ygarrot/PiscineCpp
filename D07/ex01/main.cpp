/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 12:10:40 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 21:35:57 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.cpp"
#include<stdio.h> 
#include<string.h>

void	myUpper(char *c)
{
	if (std::tolower(*c))
			*c = std::toupper(*c);
}

void strToupper(std::string * str)
{
	char *str2 = strdup(str->c_str());
	iter<char, int>(str2, str->length(), myUpper);
	std::cout << str2 << std::endl;
	delete str2;
}

template<typename T>
void	Add(T *i)
{
	*i +=1;
}

template<typename T>
void	print(T *toPrint)
{
	std::cout << *toPrint << std::endl;	
}

int main(void)
{
	std::string array[6] = { "this is", "an array", "of", "upper", "case", "character"};
	std::string *allocated = new std::string[6]; 
	int *tab = new int[10];
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;

	for (int i = 0; i < 6; i++)
		memcpy(&allocated[i], &array[i], array[i].length() +1);
	iter<std::string , int >(allocated, 5, &strToupper);
	iter<int, int >(tab, 5, &Add);
	iter<int, int >(tab, 5, &print);
	delete [] tab;
	delete [] allocated;
}
