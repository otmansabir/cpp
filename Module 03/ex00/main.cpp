/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:23:30 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 12:36:44 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    std::string str = "nikolas";
    ClapTrap robot(str);

    robot.attack("nike");
    robot.takeDamage(4);
    robot.beRepaired(20);
    
}