/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 02:01:42 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/24 15:46:45 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(Zombie * zombie, ZombieType type){
	zombie->setType(type);
}

Zombie * ZombieEvent::newZombie(std::string name){
	return new Zombie(name);
}
Zombie * ZombieEvent::newZombie(std::string name, ZombieType type){
	return new Zombie(name, type);
}

Zombie * ZombieEvent::randomChump(void){
	return new Zombie();
}
