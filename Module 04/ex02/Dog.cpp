/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:27:56 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 03:59:46 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : PrefixAnimal("Dog")
{
    this->DogBrain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &a)
{
    *this = a;
    std::cout << "Copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &a)
{
    if (this->DogBrain)
        delete DogBrain;
    this->DogBrain = new Brain(*a.DogBrain);      
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

std::string Dog::getType() const
{
    return this->type;
}

void    Dog::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete DogBrain;
}
