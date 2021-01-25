/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 03:08:05 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 21:46:34 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void	print_files(int ac, char **av){
	std::ifstream in;
	std::ostringstream sstream;
	
	for (int i = 1; i < ac; i++){
		in.open(av[i]);
		sstream << in.rdbuf();
		std::cout << sstream.str();
		sstream.str("");
		in.close();
	}
}

int main(int ac, char **av){
	std::string str;

	if (ac > 1)
		print_files(ac,av);
	else
		while (getline(std::cin, str))
			std::cout << str << std::endl;
	return 0;
}
