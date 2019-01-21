/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:45:03 by jdavin            #+#    #+#             */
/*   Updated: 2019/01/13 23:15:16 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(std::string name, char **hitbox, int hp, t_pos position) {
    (void)hitbox;
    this->_isPlaying = true;
    this->_name = name;
    this->_hp = hp;
    this->_position = position;
}

Player::Player(void) : ACharacter()
{
    this->_isPlaying = true;
    this->_translation =1;
    this->_position = (t_pos){ 2, LINES/2};
    this->_weapon = new Laser((t_pos){.y=0, .x=1});
    this->_hitbox[0][0] = '>';
}

Player::~Player(void) { }

void	Player::moveUp(void)
{
    this->_position.y -= this->_translation;
}

void	Player::moveDown(void)
{
    this->_position.y += this->_translation;
}

void	Player::moveLeft(void)
{
    this->_position.x -= this->_translation;
}

void	Player::moveRight(void)
{
    this->_position.x += this->_translation;
}

Player::Player(Player const &src) {
    *this = src;
}

Player 			&Player::operator=(Player const & src) {
    ACharacter::operator=(src);
    return *this;
}
void    Player::exitGame(Dashboard *board) {
    board->_isRunning = false;
}

int	Player::move(char ***map, t_pos limit, Dashboard *board)
{
    int choice = getch();
    int ret = 0;

    nodelay(stdscr, true);
    keypad(stdscr, true);
    switch(choice)
    {
	    case KEY_UP:this->moveUp();break;
	    case KEY_DOWN:this->moveDown();break;
	    case KEY_LEFT:this->moveLeft();break;
	    case KEY_RIGHT:this->moveRight();break;
	    case ' ':(*board).push(this->attack());break;
	    case 'q':this->exitGame(board);break;
	/* case S */
    }
    if (this->_position.x <= 0 || this->_position.x >= board->_cursMap.maxLength)
	this->_position.x = 1;
    if (this->_position.y <= 0 || this->_position.y >= board->_cursMap.maxWidth)
	this->_position.y = 1;

    this->displayInfo(board->_gameInfo.window);
    if(!(ret = AGameEntity::getIntoMap(map, limit, board)))
    board->_isRunning = false;
    return ret;
}


void	Player::display(WINDOW *window)
{
    mvwaddch(window, this->_position.y, this->_position.x, 'o');
}

