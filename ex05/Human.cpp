/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:51:41 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 01:27:17 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

#include <iostream>

Human::Human(){
	std::cout << "Human Constructed" << std::endl;
}

Human::~Human(){
	std::cout << "Human Destroyed" << std::endl;
}

Brain & Human::getBrain(){
	return _brain;
}

Brain * Human::identify(){
	return &_brain;
}
