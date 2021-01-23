/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:00:07 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/23 02:08:42 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

typedef enum e_zombieType {None, Walker, Runner, Crawler, Armored, } ZombieType;

class Zombie{
	std::string _name;

public:
	ZombieType type;
	
	Zombie(std::string name);
	Zombie(std::string name, ZombieType type);
	~Zombie();
	
	std::string getName();
	std::string typeToString(ZombieType type);
	void announce();
};

#endif
