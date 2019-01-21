/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 22:31:23 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/18 23:38:57 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <fstream>
#include <iostream>

#include "BeginLoop.hpp"
#include "DecByte.hpp"
#include "DecPtr.hpp"
#include "EndLoop.hpp"
#include "IncByte.hpp"
#include "IncPtr.hpp"
#include "InsertByte.hpp"
#include "PrintByte.hpp"
#include "Exception.hpp"


IMindOpen *newIncPtr(t_openStruct *struc)
{
	return new IncPtr(struc);
}

IMindOpen *newIncByte(t_openStruct *struc)
{
	return new IncByte(struc);
}

IMindOpen *newDecPtr(t_openStruct *struc)
{
	return new DecPtr(struc);
}

IMindOpen *newDecByte(t_openStruct *struc)
{
	return new DecByte(struc);
}

IMindOpen *newPrintByte(t_openStruct *struc)
{
	return new PrintByte(struc);
}

void newBeginLoop(t_openStruct *struc, std::list<BeginLoop*> *twinList, std::list<IMindOpen*> *instrList)
{
	BeginLoop *begin;

	begin = new BeginLoop(struc);
	instrList->push_back(begin);
	twinList->push_back(begin);
}

void newEndLoop(t_openStruct *struc, std::list<BeginLoop*> *twinList, std::list<IMindOpen*> *instrList)
{
	BeginLoop *lastTwin= twinList->back();
	EndLoop *end;


	if (!lastTwin)
		throw ParseException();
	end = new EndLoop(struc);
	end->begin = lastTwin;
	instrList->push_back(end);
	lastTwin->end = end;
	/* delete lastTwin; */
	twinList->pop_back();
}

IMindOpen *newInsertByte(t_openStruct *struc)
{
	return new InsertByte(struc);
}

void fillQueue(t_openStruct *openMap, std::string content)
{
	std::string opList = "()=_@!{}";
	std::list<BeginLoop*> twinList;
	bool isInList;
	t_temp temp[6] = 
	{
		{opList[0], newDecPtr},
		{opList[1], newIncPtr},
		{opList[2], newIncByte},
		{opList[3], newDecByte},
		{opList[4], newPrintByte},
		{opList[5], newInsertByte},
	};

	for (unsigned int i =0; i < content.length() -1; i++)
	{
		isInList = false;
		for (int a = 0; a < 6; a++)
			if (temp[a].op == content[i])
			{
				openMap->queue->push_back(temp[a].instruction(openMap));
				isInList = true;
			}
		if (content[i] == '{')
			newBeginLoop(openMap, &twinList, openMap->queue);
		else if (content[i] == '}')
			newEndLoop(openMap, &twinList, openMap->queue);
		else if (!isInList)
			throw ParseException();
		openMap->queue->back()->c = content[i];
	}
	if (!twinList.empty())
	{
		throw ParseException();
	}
}
