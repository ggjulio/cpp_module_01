/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 01:33:50 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 02:20:57 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string type): _type(type){}
Weapon::~Weapon(){}

std::string const & Weapon::getType(){
	return _type;
}
void Weapon::setType(std::string type){
	_type = type;
}
