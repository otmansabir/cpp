/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:04:40 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 05:45:42 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const std::string &_type) : type(_type)
{
    std::cout << "Animal Constructor called" << std::endl;
}
Animal::Animal(const Animal &a)
{
   std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Animal &Animal::operator=(const Animal &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = a.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}