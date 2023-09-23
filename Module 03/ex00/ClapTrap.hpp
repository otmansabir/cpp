/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:42:13 by osabir            #+#    #+#             */
/*   Updated: 2023/09/23 17:43:40 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	Name;
		int	HitPoint;
		int EnergyPoint;
		int AttackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string &name);
		ClapTrap(const ClapTrap &a);
		ClapTrap &operator=(const ClapTrap &a);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif