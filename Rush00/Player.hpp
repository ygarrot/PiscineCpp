/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:56:24 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 19:16:45 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PLAYER_HPP
#define PLAYER_HPP

#include <ncurses.h>
/* #include "Dashboard.hpp" */
#include "AGameEntity.hpp"
#include "ACharacter.hpp"

class AGameEntity;
class Dashboard;
/* class AGameEntity::ACharacter; */

typedef struct s_pos t_pos;

class 					Player : public ACharacter
{
	public:
		void	moveRight(void);
		void	moveLeft(void);
		void	moveUp(void);
		void	moveDown(void);
		void	display(WINDOW *window);
		int		move(char ***map, t_pos limit, Dashboard *board);
		void	move(WINDOW *window, WINDOW *info, Dashboard *board);
		void 	exitGame(Dashboard *board);
		Player(std::string name, char **hitbox, int hp, t_pos position);
		Player(void);
		~Player(void);
		Player(Player const &src);

		Player 			&operator=(Player const & src);

	private:
		bool 			_isPlaying;

};

#endif
