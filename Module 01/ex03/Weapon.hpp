/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:27:10 by osabir            #+#    #+#             */
/*   Updated: 2023/09/14 19:02:53 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string newtype);
        Weapon();
        ~Weapon();
        const std::string& getType();
        void    setType(std::string newtype);
};

#endif 