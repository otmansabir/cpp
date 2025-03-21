/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:23:22 by osabir            #+#    #+#             */
/*   Updated: 2023/09/15 17:47:50 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}


void Harl::warning( void )
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*funPtr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = (level == "DEBUG") ? 0 : ((level == "INFO") ? 1 : ((level == "WARNING") ? 2 : ((level == "ERROR") ? 3 : -1)));
    if (i != -1)
        ((this->*funPtr[i])());
}
