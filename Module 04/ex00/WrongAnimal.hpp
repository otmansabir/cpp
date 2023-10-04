/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:19:01 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 02:16:07 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string &_type);
        WrongAnimal(const WrongAnimal &a);
        WrongAnimal &operator=(const WrongAnimal &a);
        void  makeSound() const;
        ~WrongAnimal(); 
};

#endif