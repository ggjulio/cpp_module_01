/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:05:52 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/23 00:34:23 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name, std::string color, std::string where):
	_name(name), _color(color), _where(where)
{
	std::cout << ">> " << _name << " is born ! "
		<< _name << " has a beautiful "<< _color << " mane." << std::endl;
}

Pony::~Pony(){
	std::cout << ">> " << _name << " died." << std::endl;
}

void Pony::say()
{
	std::cout << ">> I'm " << _name << " !"
		<< "  My mane is " << _color
		<< ", i'm on the "<< _where << " !!" << std::endl;	
}
