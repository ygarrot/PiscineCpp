/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameInit.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 16:27:04 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/13 23:20:20 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AGameEntity.hpp"
#include "Dashboard.hpp"
void	setGame(Dashboard * dashboard);

void	gameInit(void)
{
	Dashboard *dashboard;
	initscr();
	cbreak();
	noecho();
	dashboard = new Dashboard();
	setGame(dashboard);
	delete dashboard;
}
