/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 02:01:42 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/23 02:52:05 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(Zombie & zombie, ZombieType type){
	zombie.type = type;
}

Zombie * ZombieEvent::newZombie(std::string name){
	return new Zombie(name);
}

#include <iostream>
#include <stdlib.h>
#include <time.h>

Zombie * ZombieEvent::randomChump(void){
	const char *attr[] = {"meaningful","evil","angry", "brave","clever","sad",
	"confident","crazy","distracted","hopeful","lucid","naughty","strange","silly"};
	const char *name[] = {"allen","bob","austin","beaver","bell","bouman","buck",
	"carver","carson","cohen","clarke","cray","darwin","davinci","dijkstra","euclid",
	"euler","fermi","galileo","haslett","hawking","herschell","hopper","jepsen"};

	// std::cout << rand(time(NULL)) % 5 <<std::endl<<std::endl sizeof(name)/8;
	return newZombie(
		std::string(attr[rand()%(sizeof(attr)/8)]) + "_" + std::string(name[rand()%(sizeof(name)/8)]));	
}
