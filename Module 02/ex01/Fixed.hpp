/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:48:52 by osabir            #+#    #+#             */
/*   Updated: 2023/09/23 13:57:55 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED2_HPP
# define FIXED2_HPP

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
			
};

std::ostream &operator<<(std::ostream &out, const Fixed &Fix); 

#endif