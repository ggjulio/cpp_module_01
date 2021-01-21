/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:05:59 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/21 11:45:24 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <string>

class Pony{
	std::string _name;
	std::string _color;
	std::string _where;
	
public:
	void say();
	Pony(std::string name, std::string color, std::string where);
	~Pony();
};

#endif