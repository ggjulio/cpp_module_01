/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:17:03 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 00:41:36 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string  str = "HI THIS IS BRAIN";
	std::string * ptr = &str;
	std::string & ref = str;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	ref = "Hola";
	std::cout << str << std::endl;
}
