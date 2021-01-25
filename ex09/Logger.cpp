/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:27:27 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 16:03:03 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <ctime>
#include <iostream>
# include <stdexcept>

Logger::Logger(std::string filename): _filename(filename){}
Logger::~Logger(){}

void Logger::_logToConsole(std::string log){
	std::cout << log;
}
void Logger::_logToFile(std::string log){
	_filename;
}

std::string	Logger::_makeLogEntry(std::string message){
	char	buffer[20];
	time_t rawtime;
	struct tm * timeinfo;

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	std::strftime(buffer, 20, "[%Y%m%d_%H%M%S] ", timeinfo);
	return  buffer + message;
}

void Logger::log(std::string const &dest, std::string const &message){
	void Logger::(*console)(std::string log) = &_logToConsole;
	
	if (dest == _filename)
		// return _logToFile(_makeLogEntry(message));
		return  (_makeLogEntry(message));
	if (dest == "cout")
		// return _logToConsole(_makeLogEntry(message));
		return ;
	throw std::invalid_argument(
		"\nUnknown destination:\n\tvalue should be 'cout' or the filename");
}