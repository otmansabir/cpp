/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:19:01 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 03:53:06 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : PrefixAnimal("Cat")
{
    this->CatBrain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &a)
{
    *this = a;
    std::cout << "Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &a)
{
    if (this->CatBrain)
        delete CatBrain;
    this->CatBrain = new Brain(*a.CatBrain);      
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

std::string Cat::getType() const
{
    return this->type;
}

void    Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete CatBrain;
}