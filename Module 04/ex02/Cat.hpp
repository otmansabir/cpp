/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:12:02 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 03:54:12 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public PrefixAnimal
{
    private:
        Brain *CatBrain;
    public:
        Cat();     
        Cat(const Cat &a);
        Cat &operator=(const Cat &a); 
        std::string getType() const; 
        void makeSound() const;
        ~Cat();     
};

#endif