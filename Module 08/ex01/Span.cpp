/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:24:42 by osabir            #+#    #+#             */
/*   Updated: 2024/10/17 11:16:33 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : max(25)
{
}

Span::Span(unsigned int N) : max(N)
{
}

Span &Span::operator=(const Span &S)
{
    if (this != &S)
    {
        this->max = S.max;
        this->save = S.save;   
    }
    return *this;
}

Span::Span(const Span &S)
{
    *this = S;
}

Span::~Span()
{
}

void Span::addNumber(int add)
{
    if (this->save.size() < this->max)
        save.push_back(add);
    else
        throw std::runtime_error("Span is already full.");
}

int Span::longestSpan()
{
    if (save.size() <= 1)
        throw std::runtime_error("Cannot find longest span: too few numbers stored.");
    return *std::max_element(save.begin(), save.end()) - *std::min_element(save.begin(), save.end());
}

int Span::shortestSpan()
{
    if (save.size() <= 1)
        throw std::runtime_error("Cannot find shortest span: too few numbers stored.");
    int small = INT_MAX;
    for (unsigned long j = 0; j < save.size(); j++)
    {
        for (unsigned long i = 0; i < save.size(); i++)
        {
            if (save[j] != save[i] && save[j] - save[i] >= 0 && save[j] - save[i] < small)
                small =  save[j] - save[i];
        }
    }
    return small;
    
}

