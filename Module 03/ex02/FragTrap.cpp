/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:20:03 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 15:46:20 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->Name = "No Name Set";
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
    
}
FragTrap::FragTrap(std::string &Name)
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->Name = Name;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &a)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = a;   
}

FragTrap &FragTrap::operator=(const FragTrap &a)
{
    if (this != &a)
    {
        std::cout << "FragTrap Copy assignment operator called" << std::endl;
        this->Name = a.Name;
        this->EnergyPoint = a.EnergyPoint;
        this->HitPoint = a.HitPoint;
        this->AttackDamage = a.AttackDamage;
    }
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    if (this->EnergyPoint <= 0 || this->HitPoint <= 0)
    {
        std::cout << "No hit points or energy points left!" << std::endl;
        return ;
    }
    std::cout << "high Fives Guys" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->EnergyPoint <= 0 || this->HitPoint <= 0)
	{
		std::cout << "FragTrap " << this->Name 
		<< " can't attack. No hit points or energy points left!" << std::endl;
        return;
	}
	this->EnergyPoint--;
	std::cout << "FragTrap " << this->Name  
	<< " attacks " << target << ", causing " 
	<< this->AttackDamage << " points of damage!" 
	<< std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}