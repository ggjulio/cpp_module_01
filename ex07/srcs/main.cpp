/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 03:08:05 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 13:14:46 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void replace(std::ifstream & in, std::ofstream & out,
	std::string to_find, std::string new_str)
{
	std::ostringstream st;
	std::string s;
	
	(void) out;
	st << in.rdbuf();
	s = st.str();
	for (size_t i = 0; i < s.size() ; i+=0)
	{
		std::cout << "find:"  << s.substr(i);
		std::size_t found = s.substr(i).find(to_find);
		if (found != std::string::npos)
		{
			s.replace(i, to_find.size(), new_str);
			std::cout << "|||| " << s;
			i+=found+1;
		}
		else 
			i++;
		std::cout << std::endl;
	}
	out << s;
}

int main(int ac, char **av)
{
	std::ifstream in;
	std::ofstream out;

	if (ac == 4)
	{
		in.open(av[1]);
		out.open(std::string(av[1]) + ".replace");
		if (in.is_open() && out.is_open())
		{
			replace(in, out, av[2], av[3]);
			return 0;
		}
		else
			std::cout << "Can't open file" << std::endl;
	}
	else
		std::cout << "Bad args." << std::endl;
	return 1;
}
