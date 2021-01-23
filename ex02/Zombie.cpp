/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:01:31 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/23 02:12:50 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>
#include <iomanip>

Zombie::Zombie(std::string name): _name(name), type(None){
	announce();
}

Zombie::Zombie(std::string name, ZombieType type): _name(name), type(type){
	announce();
}

Zombie::~Zombie(){
	std::cout << "<"+_name+"("
		<<typeToString(type) << ")> DIED" << std::endl;
}

void Zombie::announce(){
	std::cout << "<"+_name+"("
		<<typeToString(type) << ")> I love popcorn." << std::endl;
}

std::string Zombie::typeToString(ZombieType type)
{
	const char *typeStr[5] = {"None","Walker","Runner", "Crawler","Armored"};
	return typeStr[type];
}

std::string Zombie::getName(){
	return _name;
}
