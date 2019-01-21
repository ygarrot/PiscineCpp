/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 16:07:10 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/08 17:17:43 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream> 

class Logger
{
	public:
		Logger(std::string outFile);
		void log(std::string const & dest, std::string const & message);

	private:
		std::string outFile;
		void logToConsole(std::string const & string);
		void logToFile(std::string const & string);
		std::string makeLogEntry(std::string const & string);
};

#endif
