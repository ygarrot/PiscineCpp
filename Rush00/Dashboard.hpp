/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dashboard.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:29:22 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 22:18:55 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DASHBOARD_HPP
#define DASHBOARD_HPP

#include <ncurses.h>
#include <iostream>
#include <fstream>

#include "AGameEntity.hpp"
class AGameEntity;
typedef struct s_pos t_pos;

typedef struct s_list t_list;

int getFromContent(t_list *content, void *toFind);
int getFromPosition(AGameEntity *entity, void *pos);
typedef struct s_window
{
	WINDOW *window;
	int		maxLength;
	int		maxWidth;
	t_pos *position;
}							t_window;

class Dashboard
{
	public:
		Dashboard(void);
		~Dashboard(void);
		Dashboard(Dashboard const & src);
		Dashboard 	&operator=(Dashboard const & src);

		t_list 	*push(AGameEntity *entity);
		void	pop(t_list *todel);
		void	listIter(void (*f)(AGameEntity *entities));
		 AGameEntity *getEntity(int (*f)(AGameEntity *entity, void *content), void *content);
		void	deleteEntity(AGameEntity *entity);
		t_list *getBlock(int (*f)(t_list *entity, void *content), void *content);
		std::ofstream logfile;
		char **_map;
		void	moveAllEntities(void);
		void	displayInfo(void);
		t_window _gameInfo;
		t_window _cursMap;
		t_list	*_head;
		t_list	*_tail;
		int	_isRunning;
		int		_score;
		float _time;

	private:

};

#endif
