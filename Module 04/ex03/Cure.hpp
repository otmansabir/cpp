/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:34:35 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 04:25:05 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &a);
        Cure &operator=(const Cure &a);
        ~Cure();

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif