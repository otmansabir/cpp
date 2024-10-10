/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:34:08 by osabir            #+#    #+#             */
/*   Updated: 2024/10/10 11:31:20 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


// class Awesome
// {
// 	public:
//     	Awesome( void ) : _n( 42 ) { return; }
//     	int get( void ) const { return this->_n; }
// 	private:
//     	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
// 	o << rhs.get();
// 	return o;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter(  tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }

int main( void )
{   
    int i[5] = {1, 2, 3, 4, 5};
    iter(i, 5, print<int>);
    for (int j = 0; j < 5; j++)
        std::cout << *(j+i) << std::endl;
    char C[5] = {'a', 'b', 'c', 'd', 'e'};
    iter(C, 5, print<char>);
    for (int j = 0; j < 5; j++)
        std::cout << *(j+C) << std::endl;
}