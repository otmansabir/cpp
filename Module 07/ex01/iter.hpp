/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:38:00 by osabir            #+#    #+#             */
/*   Updated: 2024/10/10 10:20:44 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename M>
void iter(T *addrs, size_t length, void (*funcion)(M))
{
	for (size_t i = 0; i < length; i++)
		funcion(addrs[i]);
}

template <typename M>
void    print(M &node)
{
    std::cout << node << std::endl;;
}

#endif



