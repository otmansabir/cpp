/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:06:19 by osabir            #+#    #+#             */
/*   Updated: 2023/09/23 16:36:15 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->FixedPoint = 0;
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fix)
{
	out << Fix.toFloat();
	return out;
}

Fixed::Fixed(const int &a)
{
    this->FixedPoint = a * (1 << this->Fract);
}

Fixed::Fixed(const float &a)
{
    this->FixedPoint = roundf(a * (1 << this->Fract));
}

Fixed &Fixed::operator=(const Fixed &a)
{
	if (this != &a)
		this->FixedPoint = a.FixedPoint;
    return *this;
}

Fixed::Fixed(const Fixed &a)
{
	*this = a;
}

int Fixed::toInt( void ) const
{
	return FixedPoint / (1 << Fract);
}

float   Fixed::toFloat( void ) const
{
	return (FixedPoint / (float)(1 << Fract));
}

Fixed::~Fixed()
{
}


// The 6 comparison operators:
bool Fixed::operator!=(const Fixed& b) const
{
    return (this->FixedPoint != b.FixedPoint);
}

bool Fixed::operator==(const Fixed& b) const
{
    return (this->FixedPoint == b.FixedPoint);
}
bool Fixed::operator<(const Fixed& b) const
{
    return (this->FixedPoint < b.FixedPoint);
}

bool Fixed::operator<=(const Fixed& b) const
{
    return (this->FixedPoint <= b.FixedPoint);
}

bool Fixed::operator>(const Fixed& b) const
{
    return (this->FixedPoint > b.FixedPoint);
}

bool Fixed::operator>=(const Fixed& b) const
{
    return (this->FixedPoint >= b.FixedPoint);
}


// The 4 arithmetic operators:
Fixed Fixed::operator+(const Fixed& b)
{
    Fixed r;
    r.FixedPoint = this->FixedPoint + b.FixedPoint;
    return r;
}

Fixed Fixed::operator-(const Fixed& b)
{
    Fixed r;
    r.FixedPoint = this->FixedPoint - b.FixedPoint;
    return r;
}

Fixed Fixed::operator*(const Fixed& b)
{
    Fixed r;
    long f;
    f = this->FixedPoint * b.FixedPoint;
    f = f / (1 << this->Fract);
    r.FixedPoint = f;
    return r;
}

Fixed Fixed::operator/(const Fixed& b)
{
    Fixed r;
    r.FixedPoint = this->FixedPoint / b.FixedPoint;
    return r;
}


// The 4 increment/decrement
Fixed &Fixed::operator++()
{
    this->FixedPoint += 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    operator++();
    return old;
}
 
Fixed &Fixed::operator--()
{
    this->FixedPoint -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    operator--();
    return old;
}



// The e four public overloaded member functions
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.FixedPoint > b.FixedPoint)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.FixedPoint > b.FixedPoint)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.FixedPoint < b.FixedPoint)
        return b;
    return a;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.FixedPoint < b.FixedPoint)
        return b;
    return a;
}