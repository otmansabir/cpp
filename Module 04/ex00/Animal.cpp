/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:04:40 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 15:49:04 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Constructor called" << std::endl;
}
Animal::Animal(const Animal &a)
{
   std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Animal &Animal::operator=(const Animal &a)
{
    if (this != &a)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->type = a.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor called" << std::endl;
}