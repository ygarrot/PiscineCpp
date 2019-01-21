/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setMap.cpp                               	        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 12:46:16 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 23:07:28 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include "Player.hpp"
#include "Enemy.hpp"
#include "Dashboard.hpp"
#include <time.h>

void	shiftMap(char ***map, t_window info)
{
	int x, y;

	for(y = 0; y < info.maxWidth - 1; y++)
		for(x=0;x < COLS -1; x++)
			(*map)[y][x]=(*map)[y][x+1];
}

void	fillIt(char ***map, t_pos fill, char c)
{
	if (!map)
		return;
	for (int y = fill.y;y>=0;y--)
		for (int x = fill.x;x>=0;x--)
			(*map)[y][x] = c;
}

void	setBot(char ***map, t_window info)
{
	int limit = (info.maxWidth*4)/5;
	static int last_y = info.maxWidth -1;
	static int x = 0;
	int new_y;
	int 	dir;

	(*map)[last_y][x] = 0;
	x = COLS -2;
	dir = rand()%3;
	dir--;
	new_y =last_y + dir;
	new_y = new_y < limit || new_y > info.maxWidth -2 ? last_y : new_y;
	for (int y = new_y;y < info.maxWidth-1;y++)
			(*map)[y][x] = '_';
	(*map)[new_y][x] = '#';
	last_y = new_y;
}

void	setTop(char ***map, t_window info)
{
	int limit = (info.maxWidth *4 )/5;
	limit -=2;
	static int last_y = 0;
	static int x = 0;
	int new_y;
	int 	dir;

	(*map)[last_y][x] = 0;
	x = COLS -1;
	dir = rand()%3;
	dir--;
	new_y =last_y + dir;
	new_y = new_y > limit || new_y < 0 ? last_y : new_y;
	for (int y = 0;y < new_y;y++)
			(*map)[y][x] = '_';
	(*map)[new_y][x] = '#';
	last_y = new_y;
}

void	moveAllEntities(WINDOW *win)
{
	(void)win;
}

void	setMap(char ***map, t_window info)
{
	shiftMap(map, info);
	setBot(map, info);
	setTop(map, info);
}

char **charTabDup(char **src, int width, int length)
{
	char **dest;

	dest = new char*[width];
	for ( int i = 0; i < width; ++i ){
		dest[i] = new char[length];    
		memcpy(dest[i], src[i], length);
	}
	return dest;
}


void charTabCpy(char **src, char ***dest,int width, int length)
{
	for ( int i = 0; i < width; ++i ){
		memcpy((*dest)[i], src[i], length);
	}
}

void	displayMap(s_window info, char **map)
{
	int length, width;

	for (length = 0; length < info.maxLength; length++)
	{
		for (width = 0; width < info.maxWidth; width++)
		{
			if (map[width][length])
			{
				mvwaddch(info.window, width, length, map[width][length]);
			}
		}
	}
}

void	setGame(Dashboard *dashboard)
{
	Player *player1 = new Player();
	WINDOW *win = dashboard->_cursMap.window;
	char **map = dashboard->_map;
	char **landscape;

	landscape = charTabDup(map, dashboard->_cursMap.maxWidth, dashboard->_cursMap.maxLength);
	nodelay(win, true);
	curs_set(0);
	dashboard->push(player1);
	dashboard->push(new Enemy());
	
	int 	i = 0;
	clock_t t = clock();
	clock_t start =  clock();
	clock_t tmp = clock();

	while (dashboard->_isRunning)
	{
		
		if (i % 30 == 0)
			dashboard->push(new Enemy());
		i = i > 100 ? 0 : i + 1;
		box(dashboard->_gameInfo.window, ACS_VLINE, ACS_HLINE);
		werase(win);
		setMap(&landscape, dashboard->_cursMap);
		charTabCpy(landscape, &dashboard->_map, dashboard->_cursMap.maxWidth, dashboard->_cursMap.maxLength);
		dashboard->moveAllEntities();
		displayMap(dashboard->_cursMap, map);
		wrefresh(dashboard->_gameInfo.window);
		wrefresh(win);
		resizeterm(dashboard->_cursMap.maxWidth + dashboard->_gameInfo.maxWidth, dashboard->_cursMap.maxLength);
		
		t = clock();
		usleep(24000 - (t - tmp));
		tmp = t;
		dashboard->_time  =( clock() - start ) / (double) CLOCKS_PER_SEC;;
		dashboard->displayInfo();
	}
	curs_set(1);
	clear();
	endwin();
}
