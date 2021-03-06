/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 15:53:36 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 00:57:31 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie * _horde;

public:
	ZombieHorde(size_t n);
	~ZombieHorde();

};

#endif