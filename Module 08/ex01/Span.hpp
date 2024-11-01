/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:10:06 by osabir            #+#    #+#             */
/*   Updated: 2024/10/17 11:16:54 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <limits>
#include <algorithm>
#include <iterator>

class Span
{
    private:
        unsigned int max;
        std::vector<int> save; 
        
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &S);
        Span &operator=(const Span &S);
        ~Span();
        
        void addNumber(int add);
        int shortestSpan();
        int longestSpan();
        
        template<typename T>
        void addRange(T &addRange);
};

template<typename T>
void Span::addRange(T &addRange)
{
    if (save.size() + std::distance(addRange.begin(), addRange.end()) > max)
        throw std::runtime_error("Adding range would exceed maximum capacity.");
    std::insert_iterator<T> inserter(this->save, this->save.end());
    std::copy(addRange.begin(), addRange.end(), inserter);
}


#endif



