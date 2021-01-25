/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 01:33:56 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 02:59:54 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon & weapon) : _name(name), _weapon(weapon) {}
HumanA::~HumanA(){}

void HumanA::attack(){
	std::cout << "Human A attacks with his " << _weapon.getType()
		<< std::endl;
}
