/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:19:01 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 05:35:27 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Cat &Cat::operator=(const Cat &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = a.type;
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
}