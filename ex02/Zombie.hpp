/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:00:07 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/21 13:42:55 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

typedef enum e_zombieType { Walker, Runner, Crawler, Armored } ZombieType;

class Zombie{
	std:string _name;
	ZombieType _type;

public:
	Zombie(std::string name, ZombieType type);
	~Zombie();
	void advert();
};

#endif
