/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:44:44 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 15:55:14 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>
#include <stdexcept>

void Human::meleeAttack(std::string const& target){
	std::cout << "melee attack  : " << target << std::endl;
}
void Human::rangedAttack(std::string const& target){
	std::cout << "ranged attack : " << target << std::endl;
}
void Human::intimidatingShout(std::string const& target){
	std::cout << "intimidating shout to : " << target << std::endl;
}


void Human::action(std::string const& action_name, std::string const& target){
	std::string const actions[] = {"melee", "ranged", "intimidating"};
	void (Human::*func[])(std::string const&)
		= {&Human::meleeAttack,&Human::rangedAttack, &Human::intimidatingShout};
	
	for (size_t i = 0; i < 3; i++)
		if (actions[i] == action_name)
		{
			(this->*func[i])(target);
			return ;
		}
	throw std::invalid_argument(
		"\nUnknown action name:\n\tvalue should be 'melee', 'ranged' or 'intimidating'" );
}
