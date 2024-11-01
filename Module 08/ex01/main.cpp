/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:24:07 by osabir            #+#    #+#             */
/*   Updated: 2024/10/17 11:17:55 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    try
    {
        Span sp = Span(10012);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    
        std::vector<int> numbe;
        for (int i = 0; i < 20000; i++)
            numbe.push_back(i);
        sp.addRange(numbe);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}