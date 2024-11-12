/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 07:58:17 by osabir            #+#    #+#             */
/*   Updated: 2024/11/11 12:09:42 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    Bitcoin btc;
    if (ac != 2)
        return std::cerr << "Error: Bad argument." << std::endl, 1;
    btc.ReadDataBaseFile();
    btc.Exchange(av[1]);
}