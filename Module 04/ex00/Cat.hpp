/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:12:02 by osabir            #+#    #+#             */
/*   Updated: 2023/10/01 21:29:53 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();     
        Cat(const Cat &a);
        Cat &operator=(const Cat &a); 
        std::string getType() const; 
        void makeSound() const;
        ~Cat();     
};

#endif