/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 01:33:54 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 02:56:02 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
private:
	std::string _type;
	
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	std::string const & getType();
	void setType(std::string type);
};

#endif