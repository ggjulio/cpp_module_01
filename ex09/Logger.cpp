/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:27:27 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 15:42:27 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <ctime>

Logger::Logger(std::string filename): _filename(filename){}
Logger::~Logger(){}

	void _logToConsole(std::string log){}
	void _logToFile(std::string log){}
	void _makeLogEntry(std::string message){}


void	Logger::_displayTimestamp( void ){
	char	buffer[20];
	time_t rawtime;
	struct tm * timeinfo;

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	std::strftime(buffer, 20, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
}