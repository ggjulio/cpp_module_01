/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:01:53 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 00:05:34 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie stackRandomName = Zombie();
	Zombie stack = Zombie("__Eminem__", Armored);

	Zombie *heap = ZombieEvent::newZombie("__Marvin__");
	Zombie *heapRandomName = ZombieEvent::randomChump();
	
	ZombieEvent::setZombieType(heap, Walker);
	heapRandomName->setType(Runner);

	delete heapRandomName;
	delete heap;
	return (0);
}
