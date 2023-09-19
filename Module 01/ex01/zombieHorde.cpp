/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:41:54 by osabir            #+#    #+#             */
/*   Updated: 2023/09/18 11:32:38 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *newZombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        newZombie[i].setName(name);
    }
    return newZombie;
}

