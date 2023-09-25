/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:12:18 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 14:46:40 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::string str = "Scavman";
    ScavTrap Scav(str);
    Scav.attack("another man");
    Scav.takeDamage(4);
    Scav.beRepaired(8);
    Scav.guardGate();
    return 0;
}