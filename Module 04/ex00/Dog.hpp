/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:26:59 by osabir            #+#    #+#             */
/*   Updated: 2023/09/25 15:48:12 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();     
        Dog(const Dog &a);
        Dog &operator=(const Dog &a); 
        std::string getType();
        std::string makeSound();
        ~Dog();     
};

#endif