/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:36:01 by osabir            #+#    #+#             */
/*   Updated: 2023/09/23 15:26:59 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP2
# define FIXED_HPP2

# include <iostream>
# include <cmath>


class Fixed
{
    private:
        int FixedPoint;
        static const int Fract = 8;
    public:
        Fixed();
		Fixed &operator=(const Fixed &a);
		Fixed(const Fixed &a); 
		Fixed(const int &a);
		Fixed(const float &a);
		~Fixed();
        int toInt( void ) const;
		float toFloat( void ) const;
    
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);
        
        bool operator<(const Fixed& b) const;
        bool operator>(const Fixed& b) const;
        bool operator<=(const Fixed& b) const;
        bool operator>=(const Fixed& b) const;
        bool operator==(const Fixed& b) const;
        bool operator!=(const Fixed& b) const;

        Fixed operator+(const Fixed& b);
        Fixed operator-(const Fixed& b);
        Fixed operator*(const Fixed& b);
        Fixed operator/(const Fixed& b);

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &Fix); 

#endif