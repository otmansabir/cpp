/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:12:21 by osabir            #+#    #+#             */
/*   Updated: 2023/09/14 19:06:53 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string takeName, Weapon &takeWeapon) : name(takeName), Weapons(takeWeapon)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->Weapons.getType() << std::endl;
}