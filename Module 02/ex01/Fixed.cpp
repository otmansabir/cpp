/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:03:08 by osabir            #+#    #+#             */
/*   Updated: 2023/09/23 11:05:28 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fix)
{
	out << Fix.toFloat();
	return out;
}

Fixed::Fixed(const int &a)
{
	std::cout << "Int constructor called" << std::endl;
    this->FixedPoint = a * (1 << this->Fract);
}

Fixed::Fixed(const float &a)
{
	std::cout << "Float constructor called" << std::endl;
    this->FixedPoint = roundf(a * (1 << this->Fract));
}

Fixed &Fixed::operator=(const Fixed &a)
{
	if (this != &a)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->FixedPoint = a.FixedPoint;
	}
    return *this;
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

int Fixed::toInt( void ) const
{
	return this->FixedPoint / (1 << this->Fract);
}

float   Fixed::toFloat( void ) const
{
	return this->FixedPoint / (float)(1 << this->Fract);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}