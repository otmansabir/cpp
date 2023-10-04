/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:34:37 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 05:29:37 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{  
}

Cure::Cure(const Cure &a)
{
    *this = a;   
}

Cure &Cure::operator=(const Cure &a)
{
    this->type = a.type;
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
}

Cure::~Cure()
{
}
