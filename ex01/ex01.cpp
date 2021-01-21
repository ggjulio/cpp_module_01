/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:48:26 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/21 11:57:10 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string * panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
}
