/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 01:34:01 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 02:53:45 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon & weapon){
	_weapon = &weapon;
}

void HumanB::attack(){
	std::cout << "Human B attacks with his " << _weapon->getType()
		<< std::endl;
}
