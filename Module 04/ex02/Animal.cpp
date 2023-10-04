/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:04:40 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 03:55:59 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

PrefixAnimal::PrefixAnimal() : type("PrefixAnimal")
{
    std::cout << "PrefixAnimal Constructor called" << std::endl;
}

PrefixAnimal::PrefixAnimal(const std::string &_type) : type(_type)
{
    std::cout << "PrefixAnimal Constructor called" << std::endl;
}
PrefixAnimal::PrefixAnimal(const PrefixAnimal &a)
{
    *this = a;
   std::cout << "Copy constructor called" << std::endl;
}

PrefixAnimal &PrefixAnimal::operator=(const PrefixAnimal &a)
{
    this->type = a.type;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

std::string PrefixAnimal::getType() const
{
    return this->type;
}

PrefixAnimal::~PrefixAnimal()
{
    std::cout << "PrefixAnimal Destructor called" << std::endl;
}