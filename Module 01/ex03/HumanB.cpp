/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:17:13 by osabir            #+#    #+#             */
/*   Updated: 2023/09/14 19:20:11 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string takeName) : name(takeName)
{
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon& takeWeapon)
{
    this->Weapons = &takeWeapon;
}

void    HumanB::attack()
{
    if (Weapons)
        std::cout << this->name << " attacks with their " << this->Weapons->getType() << std::endl;
}