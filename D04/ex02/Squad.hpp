/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:39:34 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/11 21:38:49 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Squad_HPP
#define Squad_HPP

#include "ISquad.hpp"
#include <iostream>
#include "ISpaceMarine.hpp"

typedef struct s_list
{
	ISpaceMarine *marine;
	struct s_list *next;
} 		t_list;

class Squad : public ISquad
{
	public:
		~Squad();
		int getCount() const;
		ISpaceMarine* getUnit(int) const ;
		int push(ISpaceMarine*);

		Squad(Squad const &src);
		Squad & operator=(Squad const & src);
		Squad(void);
	private:
		int _unitNbr;
		t_list *_head;
		t_list *_tail;

};

#endif
