/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 01:34:04 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 02:52:06 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
	std::string _name;
	Weapon * _weapon;
	
public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon & weapon);
};


#endif
