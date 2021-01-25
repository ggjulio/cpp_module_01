/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:27:25 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 21:20:05 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
	std::string filename = "myfile";
	Logger l (filename);
	
	l.log(filename, "file 0");
	l.log(filename, "file 1");
	l.log("console", "STDOUT :message 0");
	l.log(filename, "file 2");
	l.log("console", "STDOUT :message 1");
	l.log(filename, "file 3");
	return 0;
}
