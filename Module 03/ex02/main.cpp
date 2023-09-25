/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:40:17 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 14:44:12 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
    std::string str = "Fragman";
    FragTrap Frag(str);
    Frag.attack("another man");
    Frag.takeDamage(4);
    Frag.beRepaired(8);
    Frag.highFivesGuys();
    return 0; 
}