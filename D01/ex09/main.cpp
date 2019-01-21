/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 16:53:32 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 11:16:25 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int	main(void)
{
	Logger logger("file.log");

	logger.log("Console", "jonhy user has logged");
	logger.log("File", "jhon has logged");
	logger.log("File", "jhonatan user has logged");
	logger.log("Console", "jean user has logged");

	return 0 ;
}
