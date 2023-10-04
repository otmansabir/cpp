/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:32:59 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 05:48:05 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria() : type("Default")
{
}

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria &AMateria::operator=(const AMateria &a)
{
}

AMateria::AMateria(const AMateria &a)
{
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void    AMateria::use(ICharacter& target)
{
    std::cout << getType() << " used on target " << target.getName() << std::endl;
}
