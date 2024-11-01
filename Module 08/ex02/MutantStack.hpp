/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:05:22 by osabir            #+#    #+#             */
/*   Updated: 2024/10/30 10:34:31 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;

        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        const_iterator begin() const
        {
            return this->c.begin();
        }
        const_iterator end() const
        {
            return this->c.end();
        }
};

#endif