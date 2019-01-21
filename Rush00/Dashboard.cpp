/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dashboard.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:33:03 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 23:21:35 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Dashboard.hpp"
#include <ncurses.h>
#include <math.h>
#include "AGameEntity.hpp"

void	delList(t_list *begin)
{
	if (!begin)
		return;
	if (begin->next)
		delList(begin->next);
	delete begin->content;
	delete begin;
}

Dashboard::Dashboard(): _head(0), _tail(0), _isRunning(1), _score(0){
   int	width;

   this->logfile.open("file.log", std::ios::app);
   this->_cursMap.maxWidth = (LINES*4) /5;
   this->_cursMap.maxLength = COLS;
   this->_gameInfo.maxWidth = (LINES*1) /5;
   this->_gameInfo.maxLength = COLS;

   this->_cursMap.window = subwin(stdscr, this->_cursMap.maxWidth, COLS, 0, 0);
   this->_gameInfo.window = subwin(stdscr, this->_gameInfo.maxWidth, COLS, this->_cursMap.maxWidth, 0);

   this->_map = new char*[this->_cursMap.maxWidth];
   for (width = 0; width < this->_cursMap.maxWidth; width++)
   {
      this->_map[width] = new char[COLS];
      memset(this->_map[width], 0, COLS);
   }
}

Dashboard::~Dashboard() {

  delList(this->_head);
  delete this->_map; 
}

Dashboard::Dashboard(Dashboard const &src) {
   *this = src;
}

void	Dashboard::displayInfo(void)
{
  this->_score++;
    mvwprintw(this->_gameInfo.window, 2, (COLS *4) /5, "Hp:%d Score:%d", 1, this->_score);  
    mvwprintw(this->_gameInfo.window, 3, (COLS *4) /5, "Duration:%.0f ", this->_time*20.0);  
}

Dashboard     &Dashboard::operator=(Dashboard const & src){
   (void)src;
   return *this;
}

void	Dashboard::pop(t_list *block)
{
   if (!block)
      return;
   if (block->prev)
      block->prev->next = block->next;
   if (block->next)
      block->next->prev = block->prev;
}


void	Dashboard::deleteEntity(AGameEntity *entity)
{
   t_list *toDel = this->getBlock(getFromContent, entity);

   (void)*toDel;
   if (!toDel)
      return ;
  this->pop(toDel);
  if (toDel == this->_head)
  {
    this->_isRunning = false;
      this->_head = this->_head->next;
  }
  if (toDel->content->_type.compare("Character"))
    this->_score += 50;

   if (toDel == this->_tail)
      this->_tail = this->_tail->prev; 
   delete toDel->content;
   delete toDel;
   toDel = NULL;
   /* delete toDel->content; */
}

t_list	*Dashboard::push(AGameEntity *entity)
{
   t_list *block = new t_list;

   block->content = entity;
   block->next = NULL;
   block->prev = NULL;
   if (!this->_head)
      this->_head = block; 
   if (!this->_tail)
      this->_tail = block;
   else
   {
      block->prev = this->_tail;
      this->_tail->next = block;
      this->_tail = block;
   }
   return this->_head;
}

void	Dashboard::moveAllEntities(void)
{
   t_list *begin;
   t_list *hasMoved = 0;

   if (!this->_head)
      return;
   begin = this->_head;
   while (begin)
   {
      if (!begin->content->move(&this->_map, (t_pos){.y=this->_cursMap.maxWidth, .x=this->_cursMap.maxLength}, this))
	  hasMoved = begin;
      begin = begin->next;
      if (hasMoved)
	 this->deleteEntity(hasMoved->content);
      hasMoved = NULL;
   }
}

int getFromPosition(AGameEntity *entity, void *pos)
{

   if (!entity)
      return 0;
   return (entity->_position.y == ((t_pos*)pos)->y && entity->_position.x == ((t_pos*)pos)->x);
}

int getFromContent(t_list *content, void *toFind)
{
   if (!content)
      return 0;
   return (content->content == toFind);
}

AGameEntity *Dashboard::getEntity(int (*f)(AGameEntity *entity, void *content), void *content)
{
   t_list *begin;

   for (begin = this->_head; begin; begin = begin->next)
      if ((*f)(begin->content, content))
	 return begin->content;
   return 0;
}


t_list  *Dashboard::getBlock(int (*f)(t_list *entity, void *content), void *content)
{
   t_list *begin;

   for (begin = this->_head; begin; begin = begin->next)
      if ((*f)(begin, content))
	 return begin;
   return 0;
}

void	Dashboard::listIter(void (*f)(AGameEntity *entity))
{
   t_list *begin;

   for (begin = this->_head; begin; begin = begin->next)
      (*f)(begin->content);
   return ;
}
