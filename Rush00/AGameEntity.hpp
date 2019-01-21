/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameEntity.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 10:59:23 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 22:01:48 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGAMEENTITY_HPP
#define AGAMEENTITY_HPP

#include <string>
#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include "Dashboard.hpp"

#define Y 0
#define X 1
class Dashboard;


typedef struct 		s_pos {
	int 			x;
	int 			y;
}					t_pos;

typedef struct		s_list t_list;

class 				AGameEntity
{
	public:
		AGameEntity();
		virtual ~AGameEntity(void);
		AGameEntity(AGameEntity const & src);

		AGameEntity 	&operator=(AGameEntity const & src);
			int				getColor(void) const;
		virtual int 	move(char ***map, t_pos limit, Dashboard *board);
		t_pos			getPos(void) const;
		void		displayInfo(WINDOW *window);
		int	getIntoMap(char ***map, t_pos limit, Dashboard *board) const;
		void	deleteFromMap(char ***map, t_pos pos) const;

		int			_hitboxSize[2];
		std::string _type;
		t_pos		_position;
	private:

	protected:
		int			_color;
		char		_hitbox[6][6];
		int			_translation;
		int			_speed;
};

struct 				s_list
{
	AGameEntity 	*content;
	struct s_list 	*next;
	struct s_list 	*prev;
};

#endif
