/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:34:32 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 04:24:17 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice() : AMateria("ice")
{    
}

Ice::Ice(const Ice &a)
{
    *this  = a;   
}

Ice &Ice::operator=(const Ice &a)
{
    this->type = a.type;
    return *this;
}

AMateria* Ice::clone() const 
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{   
}
