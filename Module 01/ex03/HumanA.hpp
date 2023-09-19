/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:14:34 by osabir            #+#    #+#             */
/*   Updated: 2023/09/14 19:06:37 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &Weapons;
    public:
        HumanA(std::string takeName, Weapon &takeWeapon);
        ~HumanA();
        void    attack();
};

#endif
