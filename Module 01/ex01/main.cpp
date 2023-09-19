/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:41:40 by osabir            #+#    #+#             */
/*   Updated: 2023/09/18 11:32:44 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *newZombie;
    int N = 4;
    newZombie = zombieHorde(   N, "boo" );
    for (int i = 0; i < N; i++)
    {
        newZombie[i].announce();
    }
    delete[] newZombie;
    return 0;
}