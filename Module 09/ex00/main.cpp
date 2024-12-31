/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 07:58:17 by osabir            #+#    #+#             */
/*   Updated: 2024/12/28 09:51:29 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    BitcoinExchange btc;
    if (ac != 2)
        return std::cerr << "Error: Bad argument." << std::endl, 1;
    btc.ReadDataBaseFile();
    btc.Exchange(av[1]);
}