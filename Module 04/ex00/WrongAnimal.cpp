/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:17:25 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 05:45:03 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &_type) : type(_type)
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
   std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = a.type;
    return *this;
}

void  WrongAnimal::makeSound() const
{
    std::cout << "Wrong sound animal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}