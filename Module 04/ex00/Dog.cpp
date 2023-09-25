/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:27:56 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 16:13:23 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Dog &Dog::operator=(const Dog &a)
{
    if (this != &a)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->type = a.type;
    }
    return *this;
}

std::string Dog::getType()
{
    return this->type;
}

std::string Dog::makeSound()
{
    std::cout << "bark" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor called" << std::endl;
}