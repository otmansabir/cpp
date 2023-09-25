/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:16:36 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 15:45:06 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string &Name);
        FragTrap(const FragTrap &a);
        FragTrap &operator=(const FragTrap &a);
        ~FragTrap();
        void    highFivesGuys(void);
        void    attack(const std::string& target);   
};

#endif