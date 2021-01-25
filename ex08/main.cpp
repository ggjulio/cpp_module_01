/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:44:49 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 15:25:19 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human h;
	h.action("melee", "Denis Broniart");
	h.action("ranged", "Denis Broniart");
	h.action("intimidating", "Denis Broniart");
	return 0;
}
