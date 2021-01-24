/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:01:31 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/24 12:30:16 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>
#include <iomanip>

Zombie::Zombie(): _type(None){
	if (_seeded == false)
		_seeded = _generateRandomSeed();
	_name = 
	announce();
}

Zombie::Zombie(std::string name): _name(name), _type(None){
	announce();
}

Zombie::Zombie(std::string name, ZombieType type): _name(name), _type(type){
	announce();
}

Zombie::~Zombie(){
	std::cout << "<"+_name+"("
		<< getZombieTypeToString() << ")> DIED" << std::endl;
}

void Zombie::announce(){
	std::cout << "<"+_name+"("
		<< getZombieTypeToString() << ")> I love popcorn." << std::endl;
}

std::string Zombie::getZombieTypeToString()
{
	const char *typeStr[5] = {"None","Walker","Runner", "Crawler","Armored"};
	return typeStr[_type];
}

std::string Zombie::getName(){
	return _name;
}

ZombieType	Zombie::getZombieType(){
	return _type;
}

void	Zombie::setZombieType(ZombieType type){
	if (_type == None)
		_type = type;
}
bool	Zombie::_generateRandomSeed(){
	srand (time(NULL));
	return true;
}
