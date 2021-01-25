/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:50:48 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 01:29:59 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human
{
private:
	Brain _brain;

public:
	Human();
	~Human();

	Brain & getBrain();

	Brain * identify();
};

#endif
