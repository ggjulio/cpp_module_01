/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:27:29 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 21:10:11 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_H
# define LOGGER_H

#include <string>
#include <fstream>
#include <iostream>

class Logger
{
private:
	std::string 	_filename;
	std::ofstream	_file;

	void		_logToConsole(std::string log);
	void		_logToFile(std::string log);
	std::string _makeLogEntry(std::string message);
		
public:
	Logger(std::string filename);
	~Logger();
	
	void log(std::string const &dest, std::string const &message);

};

#endif
