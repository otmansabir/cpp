/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:58:46 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 03:12:24 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << "Brain Constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &a)
{

    for (int i = 0; i < 100; i++)
        this->ideas[i] = a.ideas[i];
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Brain::Brain(const Brain &a)
{
    *this = a;
    std::cout << "Copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}
