/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:01:53 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/23 02:48:35 by juligonz         ###   ########.fr       */
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
	
	delete z;
	delete de;
	delete fr;
	delete fr3;
	return (0);
}
