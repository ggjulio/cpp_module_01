/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:01:53 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/24 10:54:52 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie * z = ZombieEvent::newZombie("ewdew");

	Zombie *de = ZombieEvent::randomChump();
	Zombie *fr = ZombieEvent::randomChump();
	Zombie *fr3 = ZombieEvent::randomChump();
	Zombie *fr4 = ZombieEvent::randomChump();
	Zombie *fr5 = ZombieEvent::randomChump();
	
	delete z;
	delete de;
	delete fr;
	delete fr3;
	delete fr4;
	delete fr5;
	return (0);
}
