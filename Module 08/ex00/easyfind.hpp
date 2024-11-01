/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:38:42 by osabir            #+#    #+#             */
/*   Updated: 2024/10/17 11:13:55 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

template <typename T>
typename T::iterator    easyfind(T &one, const int two)
{
    return std::find(one.begin(), one.end(), two);;
}

#endif