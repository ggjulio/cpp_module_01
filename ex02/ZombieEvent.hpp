/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 01:19:16 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/23 02:33:35 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

#include "Zombie.hpp"

class ZombieEvent
{
private:
public:
	ZombieEvent();
	~ZombieEvent();

	static Zombie * newZombie(std::string name);
	
	void setZombieType(Zombie & zombie, ZombieType type);
	static Zombie * randomChump(void);
};




#endif