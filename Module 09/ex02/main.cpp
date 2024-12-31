/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:34:58 by osabir            #+#    #+#             */
/*   Updated: 2024/12/28 09:51:56 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <iostream>

int main(int ac, char **av)
{
    try
    {
        PmergeMe Me;
        char **copy = av;
        if (ac < 2)
            return std::cerr << "Error" << std::endl, 1;
        clock_t vector_start = clock();
        av++;
        while (*av != NULL)
            Me.ParsingForVector(*av++);
        Me.possibilityToSortVector();
        
        clock_t vector_end = clock();

        clock_t deque_start = clock();
        copy++;
        while (*copy != NULL)
            Me.ParsingForDeque(*copy++);
        Me.possibilityToSortDeque();
        clock_t deque_end = clock();

        float vector_time = static_cast<float>(vector_end - vector_start) * 1000 / CLOCKS_PER_SEC;
        float deque_time = static_cast<float>(deque_end - deque_start)  * 1000 / CLOCKS_PER_SEC;

        Me.beforeSorting();
        Me.afterSorting();
    
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << (float)vector_time  << " ms" << std::endl << std::endl;
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << (float)deque_time << " ms" << std::endl << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
    