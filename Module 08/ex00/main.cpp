/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:41:28 by osabir            #+#    #+#             */
/*   Updated: 2024/10/17 11:15:50 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main( void )
{
    std::vector<int> one;

    for (int i = 1; i < 6; i++)
        one.push_back(i);
    
    for (int i = 0; i < 10; i++)
    {
        std::vector<int>::iterator get = easyfind(one, i);
        if (get != one.end())
            std::cout << "I Found The First Occurrence" << std::endl;
        else
            std::cerr << "I Didnt Found The First Occurrence" << std::endl;
    }
}