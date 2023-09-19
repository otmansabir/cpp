/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZomie.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:58:51 by osabir            #+#    #+#             */
/*   Updated: 2023/09/12 11:59:09 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*     newZombie(std::string name)
{
    Zombie *newZombie = new Zombie();
    newZombie->setName(name);
    return newZombie;
    
}