/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 02:26:29 by osabir            #+#    #+#             */
/*   Updated: 2024/08/10 06:25:07 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    Polish poli;
    if (ac != 2 || av[1][0] == '\0')
        return std::cerr << "Error" << std::endl , 1;
    poli.start_calculation(av[1]);
}