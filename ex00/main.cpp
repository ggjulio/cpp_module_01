/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 11:04:14 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/21 11:46:05 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
	Pony ponyOnTheStack = Pony("Dora", "pink", "stack");
	Pony * ponyOnTheHeap = new Pony("Nemo", "orange", "heap");

	ponyOnTheStack.say();
	ponyOnTheHeap->say();
	
	delete ponyOnTheHeap;
}
