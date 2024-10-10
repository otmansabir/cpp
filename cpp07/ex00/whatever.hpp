/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:21:00 by osabir            #+#    #+#             */
/*   Updated: 2024/10/07 09:10:22 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP


#include <iostream>

template <typename T>
void    swap(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;;
}

template <typename T>
T min(T a, T b)
{
    return a < b ? a : b;
}

#endif