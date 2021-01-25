/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:44:47 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 15:25:41 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include <string>
# include <stdexcept>

class Human{
private:
	void meleeAttack(std::string const& target);
	void rangedAttack(std::string const& target);
	void intimidatingShout(std::string const& target);

public:
	void action(std::string const& action_name, std::string const& target);

};

#endif
