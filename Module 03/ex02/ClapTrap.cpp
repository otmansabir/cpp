/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:28:33 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 14:04:42 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->Name = "Name not set";
	this->EnergyPoint = 10;
	this->HitPoint = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string &Name) : Name(Name)
{
	std::cout << "Default constructor called" << std::endl;
	this->EnergyPoint = 10;
	this->HitPoint = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a)
{
	if (this != &a)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->Name = a.Name;
		this->EnergyPoint = a.EnergyPoint ;
		this->HitPoint = a.HitPoint;
		this->AttackDamage = a.AttackDamage;
	}
    return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoint <= 0 || this->HitPoint <= 0)
	{
		std::cout << "ClapTrap " << this->Name 
		<< " can't attack. No hit points or energy points left!" << std::endl;
        return;
	}
	this->EnergyPoint--;
	std::cout << "ClapTrap " << this->Name  
	<< " attacks " << target << ", causing " 
	<< this->AttackDamage << " points of damage!" 
	<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint <= 0 || this->HitPoint <= 0) 
	{
        std::cout << "ClapTrap " << this->Name 
		<< " can't be repaired. No hit points or energy points left!" << std::endl;
        return;
    }
	this->HitPoint += amount;
	std::cout << "ClapTrap " 
	<< this->Name << " is repaired for " 
	<< amount << " points. Remaining hit points: " 
	<< this->HitPoint << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoint <= 0)
	{
		std::cout << "ClapTrap " << this->Name 
		<< " can't be repaired. No energy points left!" << std::endl;
		return ;
	}
	this->HitPoint -= amount;
	std::cout << "ClapTrap " << this->Name << " takes " 
	<< amount << " points of damage. Remaining hit points: " 
	<< this->HitPoint << std::endl;
}
