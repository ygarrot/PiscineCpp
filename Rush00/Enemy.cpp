/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 13:53:14 by jdavin            #+#    #+#             */
/*   Updated: 2019/01/13 21:53:11 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <random>

int             randomBetween(int min, int max) {
    std::mt19937 rng;

    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(min, max);
    return dist(rng);
}

Enemy::Enemy() {
    this->_translation =1;
    this->_position = (t_pos){ (COLS - 2), LINES/2 + randomBetween(-5, 5)};
    this->_weapon = new Laser((t_pos){.y=0, .x=-2});
    this->_hitbox[0][0] = '<';
    if (rand()%2)
    {
	this->_hitboxSize[X] = 3;
	this->_hitbox[1][0] = '=';
	this->_hitbox[2][0] = '+';
    }
}

Enemy::~Enemy() { }

Enemy::Enemy(Enemy const &src) {
    *this = src;
}

Enemy 			&Enemy::operator=(Enemy const & src) {
    ACharacter::operator=(src);
    return *this;
}

void	Enemy::moveUp(void)
{
    this->_position.y -= this->_translation;
}

void	Enemy::moveDown(void)
{
    this->_position.y += this->_translation;
}

int 	Enemy::move(char ***map, t_pos limit, Dashboard *board)
{
    this->_position.x -= 1;
    if (this->_position.x % 10 == 0)
	this->_position.y += randomBetween(-1, 1);
    this->_position.x += randomBetween(-1, 1);
    if (this->_position.x % 40 == 0)
	board->push(this->attack());
    this->displayInfo(board->_gameInfo.window);
    return this->getIntoMap(map, limit, board);
}

void	Enemy::display(WINDOW *window)
{
    mvwaddch(window, this->_position.y, this->_position.x, '<');
}
