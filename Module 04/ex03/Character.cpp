/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:33:14 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 05:07:12 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character() : name("default")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const std::string &name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character &Character::operator=(const Character &a)
{
    this->name = a.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        if (a.inventory[i])
            this->inventory[i] = a.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    return *this;
}

Character::Character(const Character &a)
{
    *this = a;
}

std::string const & Character::getName() const
{
    return this->name;   
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            this->inventory[i] = m;
            return ;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3 && inventory[idx])
        inventory[idx] = NULL;        
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3 && inventory[idx])
        this->inventory[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])   
            delete this->inventory[i];
    }
}
