/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:33:03 by osabir            #+#    #+#             */
/*   Updated: 2023/09/14 19:04:12 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string newtype) : type(newtype)
{
}

Weapon::~Weapon()
{
}

const std::string & Weapon::getType()
{ 
    return  type;
}

void    Weapon::setType(std::string newtype)
{
    (void) newtype;
    
    this->type = newtype;
   
}
