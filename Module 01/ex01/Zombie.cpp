/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:41:46 by osabir            #+#    #+#             */
/*   Updated: 2023/09/12 15:05:25 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->getName() << " :this Zombie has been destroyed" << std::endl;
}
std::string	Zombie::getName()
{
	return this->name;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << this->getName() <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
