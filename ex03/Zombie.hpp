/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:00:07 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/24 15:47:25 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

typedef enum e_zombieType {None, Walker, Runner, Crawler, Armored} ZombieType;

class Zombie{
private:
	std::string _name;
	ZombieType	_type;
	
	static bool	_seeded;

public:
	Zombie();
	Zombie(std::string name);
	Zombie(std::string name, ZombieType type);
	~Zombie();

	std::string getName();
	std::string generateRandomName();
	
	ZombieType	getType();
	std::string getTypeToString();
	void		setType(ZombieType type);

	void		announce();
};

#endif
