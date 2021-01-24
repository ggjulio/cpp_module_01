/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 01:19:16 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/24 15:45:58 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include "Zombie.hpp"

class ZombieEvent
{
public:
	static Zombie * newZombie(std::string name);
	static Zombie * newZombie(std::string name, ZombieType type);

	static void		setZombieType(Zombie * zombie, ZombieType type);
	static Zombie * randomChump(void);
};

#endif
