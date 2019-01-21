/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 16:07:07 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/10 11:15:36 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <ctime>

std::string get_time(void)
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];

	time (&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer,sizeof(buffer),"[%Y/%m/%d_%H:%M:%S] ",timeinfo);
	std::string str(buffer);
	return (str);
}

Logger::Logger(std::string fileName) : outFile(fileName)
{
	return ;
}

void Logger::logToConsole(std::string const & string)
{
	std::cout << string << std::endl;
}


void Logger::logToFile(std::string const & string)
{
	std::ofstream file;

	file.open(this->outFile, std::ios::app);
	if (!file.is_open())
	{
		std::cout << "file couldn't be open" << std::endl;
		return ;
	}
	file << string << std::endl;
	file.close();
}


std::string Logger::makeLogEntry(std::string const & string)
{
	return (get_time() + string);
}


void Logger::log(std::string const & dest, std::string const & message)
{
	typedef struct temp { std::string name;  void (Logger::*output)(std::string const & target);} t_temp;
	t_temp dict[2] =
	{{ "Console", &Logger::logToConsole},
		{ "File", &Logger::logToFile}};
	this->makeLogEntry(message);
	for (int i = 0; i < 3 ; i++)
		if (!dict[i].name.compare(dest))
		{
			(this->*(dict[i].output))(this->makeLogEntry(message));
			return ;
		}
}
