/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:01:31 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/24 15:48:10 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>
#include <iomanip>
#include <ctime>

Zombie::Zombie(): _type(None){
	_name = generateRandomName();
	announce();
}

Zombie::Zombie(std::string name): _name(name), _type(None){
	announce();
}

Zombie::Zombie(std::string name, ZombieType type): _name(name), _type(type){
	announce();
}

Zombie::~Zombie(){
	std::cout << "<" << std::setfill(' ')<< std::setw(20) << _name << "("
		<< std::setfill(' ')<< std::setw(10) << getTypeToString() << ")> DIED" << std::endl;
}

void Zombie::announce(){
	std::cout << "<" << std::setfill(' ')<< std::setw(20)<< _name << "("
		<< std::setfill(' ')<< std::setw(10) << getTypeToString()
		<< ")> I love popcorn." << std::endl;
}

std::string Zombie::getTypeToString()
{
	const char *typeStr[5] = {"None","Walker","Runner", "Crawler","Armored"};
	return typeStr[_type];
}

std::string Zombie::getName(){
	return _name;

}
std::string Zombie::generateRandomName(){
	const char *attr[] = {"meaningful","evil","angry", "brave","clever","sad",
	"confident","crazy","distracted","hopeful","lucid","naughty","strange","silly"};
	const char *name[] = {"allen","bob","austin","beaver","bell","bouman","buck",
	"carver","carson","cohen","clarke","cray","darwin","davinci","dijkstra","euclid",
	"euler","fermi","galileo","haslett","hawking","herschell","hopper","jepsen"};

	if (_seeded == false)
	{
		srand (time(NULL));
		_seeded = true;
	}
	return (
		std::string(attr[rand()%(sizeof(attr)/8)]) + "_" + std::string(name[rand()%(sizeof(name)/8)]));
}

ZombieType	Zombie::getType(){
	return _type;
}

void	Zombie::setType(ZombieType type){
	if (_type == None)
		_type = type;
}

// bool	Zombie::_generateRandomSeed(){
// 	srand (time(NULL));
// 	return true;
// }

bool Zombie::_seeded = false;