/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:39:23 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 05:47:42 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = a.type;
    return *this;
}

std::string WrongCat::getType()
{
    return this->type;
}

void  WrongCat::makeSound() const
{
    std::cout << "Wrong sound cat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}
