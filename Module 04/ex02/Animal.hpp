/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:51:46 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 03:55:03 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class  PrefixAnimal
{
    protected:
        std::string     type;
    public:
        PrefixAnimal();
        PrefixAnimal(const std::string &_type);
        PrefixAnimal(const PrefixAnimal &a);
        PrefixAnimal &operator=(const PrefixAnimal &a);
        virtual void makeSound() const = 0;
        std::string getType() const;
        virtual ~PrefixAnimal();
};

#endif