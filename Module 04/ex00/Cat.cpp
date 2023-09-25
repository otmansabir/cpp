/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:19:01 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 16:13:02 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Cat &Cat::operator=(const Cat &a)
{
    if (this != &a)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->type = a.type;
    }
    return *this;
}

std::string Cat::getType()
{
    return this->type;
}

std::string Cat::makeSound()
{
    std::cout << "meyaoo" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor called" << std::endl;
}