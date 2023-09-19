/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:29:17 by osabir            #+#    #+#             */
/*   Updated: 2023/09/14 19:20:03 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *Weapons;
        std::string name;
    public:
        HumanB(std::string takeName);
        ~HumanB();
        void    setWeapon(Weapon& takeWeapon);
        void    attack();
        
};

#endif
