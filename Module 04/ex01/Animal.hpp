/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:51:46 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 02:19:50 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string     type;
    public:
        Animal();
        Animal(const std::string &_type);
        Animal(const Animal &a);
        Animal &operator=(const Animal &a);
        virtual void makeSound() const;
        std::string getType() const;
        virtual ~Animal();
};

#endif