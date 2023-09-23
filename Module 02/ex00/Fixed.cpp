/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:02:05 by osabir            #+#    #+#             */
/*   Updated: 2023/09/23 10:36:33 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->Fix = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &a)
{
    if (this != &a)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->Fix = a.Fix;
    }
    return *this;
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->Fix;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->Fix = raw;
}
