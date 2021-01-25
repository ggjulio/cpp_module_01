/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:27:27 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 21:14:29 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <ctime>
#include <iostream>
#include <stdexcept>

Logger::Logger(std::string filename): _filename(filename)
{
	_file.open(filename.c_str());
	if (!_file.is_open())
		throw std::runtime_error("Could not open '"+filename+"' output.");
}
Logger::~Logger(){
	_file.close();
}

void Logger::_logToConsole(std::string log){
	std::cout << log << std::endl;
}
void Logger::_logToFile(std::string log){
	_file << log << std::endl;
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
	void (Logger::*console)(std::string log) = &Logger::_logToConsole;
	void (Logger::*file)(std::string log) = &Logger::_logToFile;
	
	(void)dest;
	if (dest == "console")
		return (this->*console)(_makeLogEntry(message));
	if (dest == _filename)
		return  (this->*file)(_makeLogEntry(message));
	throw std::invalid_argument(
			"\nUnknown destination '"+dest+"':\n\tvalue should be 'console' or '"+_filename+"'");
}
