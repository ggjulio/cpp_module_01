/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 01:33:59 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 02:57:49 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	std::string _name;
	Weapon & _weapon;
	
public:
	HumanA(std::string name, Weapon & weapon);
	~HumanA();

	void attack();
};


#endif
