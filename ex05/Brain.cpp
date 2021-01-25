/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:44:27 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 02:04:16 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain(){
	std::cout << "Brain Constructed" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain Destroyed" << std::endl;
}

Brain const * Brain::identify() const{
	return this;
}
