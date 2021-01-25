/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:44:06 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/25 01:55:28 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

class Brain
{
private:
	bool _isEmpty;

public:
	Brain();
	~Brain();

	Brain const * identify() const;

	bool getIsEmpty();
};

#endif
