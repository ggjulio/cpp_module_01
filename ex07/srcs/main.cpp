/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 03:08:05 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/26 17:19:28 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include <streambuf>

void replace(std::ifstream & in, std::ofstream & out,
	std::string to_find, std::string new_str)
{
	std::ostringstream sstream;
	std::string s;
	std::size_t found;

	sstream << in.rdbuf();
	s = sstream.str();
	while ((found = s.find(to_find)) != std::string::npos)
		s.replace(found, to_find.size(), new_str);
	out << s;
}

int main(int ac, char **av)
{
	std::ifstream in;
	std::ofstream out;

	if (ac == 4 && !std::string(av[2]).empty())
	{
		in.open(av[1]);
		if (in.is_open())
		{
			out.open((std::string(av[1]) + std::string(".replace")).c_str());
			if (out.is_open())
			{
				replace(in, out, av[2], av[3]);
				return 0;
			}
		}
		std::cout << "Can't open file" << std::endl;
	}
	else
		std::cout << "Bad args." << std::endl;
	return 1;
}
