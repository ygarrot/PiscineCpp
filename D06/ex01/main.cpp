/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:57:50 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 16:56:14 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data { std::string s1; int n; std::string s2; };

void gen_random(std::string & s) {
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; ++i) {
		s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}
	s[8] = 0;
}

void * serialize( void )
{
	Data *data;

	data = new Data;
	gen_random(data->s1);
	gen_random(data->s2);
	data->n = rand();
	std::cout << "avant" << std::endl;
	std::cout << data->s1.c_str() << "   " << data->n << "  " << data->s2.c_str() << std::endl;
	return data;
}

Data * deserialize( void * raw )
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	void *ptr;
	Data *data;

	ptr = serialize();
	data = deserialize(ptr);
	std::cout << "apres" << std::endl;
	std::cout << data->s1.c_str() << "   " << data->n << "  " << data->s2.c_str() << std::endl;
	delete data;
}
