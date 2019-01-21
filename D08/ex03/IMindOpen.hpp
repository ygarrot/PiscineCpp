/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMindOpen.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:28:56 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 23:26:10 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMINDOPEN_HPP
#define IMINDOPEN_HPP

#include <iostream>
#include <list>

class BeginLoop;
class EndLoop;

typedef struct openStruct t_openStruct;

class 					IMindOpen
{
	public:
		virtual int	execute(void) = 0;
		virtual ~IMindOpen(void) = 0;
		t_openStruct *struc;
		char c;

	private:
};

struct openStruct
{
	unsigned char *ptr;
	unsigned char *map;
	std::list<IMindOpen*>::iterator it;
	std::list<IMindOpen*> *queue;
};

void fillQueue(t_openStruct *openMap, std::string content);

typedef struct templ
{
	char op;
	IMindOpen *(*instruction)(t_openStruct *struc);
} t_temp;


#endif
