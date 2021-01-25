/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:50:48 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 01:49:29 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human
{
private:
	Brain const _brain;

public:
	Human();
	~Human();

	Brain const & getBrain();
	Brain const * identify();
};

#endif
