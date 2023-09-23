/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:28:33 by osabir            #+#    #+#             */
/*   Updated: 2023/09/23 17:45:21 by osabir           ###   ########.fr       */
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
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	
}
