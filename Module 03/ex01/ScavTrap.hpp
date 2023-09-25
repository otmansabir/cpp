/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:55:29 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 15:42:28 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string &Name);
        ScavTrap(const ScavTrap &a);
        ScavTrap &operator=(const ScavTrap &a);
        ~ScavTrap();
        void    attack(const std::string& target);
        void    guardGate();
};

#endif