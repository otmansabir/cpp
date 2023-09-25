/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:55:27 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 15:46:41 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->Name = "No Name Set";
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
    
}
ScavTrap::ScavTrap(std::string &Name)
{
    std::cout << "Default constructor called" << std::endl;
    this->Name = Name;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;   
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a)
{
    if (this != &a)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->Name = a.Name;
        this->EnergyPoint = a.EnergyPoint;
        this->HitPoint = a.HitPoint;
        this->AttackDamage = a.AttackDamage;
    }
    return *this;
}

void    ScavTrap::guardGate()
{
    if (this->EnergyPoint <= 0 || this->HitPoint <= 0)
    {
        std::cout << "No hit points or energy points left!" << std::endl;
        return ;
    }
    std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoint <= 0 || this->HitPoint <= 0)
	{
		std::cout << "ScavTrap " << this->Name 
		<< " can't attack. No hit points or energy points left!" << std::endl;
        return;
	}
	this->EnergyPoint--;
	std::cout << "ScavTrap " << this->Name  
	<< " attacks " << target << ", causing " 
	<< this->AttackDamage << " points of damage!" 
	<< std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called" << std::endl;
}

