/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:25:42 by osabir            #+#    #+#             */
/*   Updated: 2023/09/21 15:31:51 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	Fix;
		static const int Fract = 8;
	public:
		Fixed();
		Fixed &operator=(const Fixed &a);
		Fixed(const Fixed &a);  
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};


#endif

