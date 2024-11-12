/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 02:26:02 by osabir            #+#    #+#             */
/*   Updated: 2024/11/10 10:57:51 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Polish::Polish()
{
}

Polish::Polish(Polish const &P)
{
    *this = P;
}

Polish &Polish::operator=(Polish const &P)
{
    if (this != &P)
        this->Math = P.Math;
    return *this;
}

Polish::~Polish()
{
}

void Polish::start_calculation(std::string input)
{
    if (Parsing(input))
    {
        if (!Math.empty())
            std::cout << Math.top() << std::endl;
    }
}

bool Polish::Parsing(std::string input)
{
    if (input.find_first_not_of("0123456789/*-+ ") != std::string::npos)
        return std::cerr << "Error" << std::endl, 0;

    return OneWayParsing(input);
}

int Polish::Calculation(int a, int b, std::string opr)
{
    int final = 0;
    char op = opr[0];

    switch (op)
    {
        case '+':
            final = a + b;
            break;

        case '-':
            final = a - b;
            break;

        case '*':
            final = a * b;
            break;

        case '/':
            if (b == 0)
                throw ("Div by Zero is Not Allowed");
            final = a / b;
            break;
    }
    return final;
}

bool Polish::OneWayParsing(std::string input)
{
    std::stringstream   tokens(input);
    std::string         line;

    while (tokens >> line)
    {
        if (line.find_first_of("-/*+") == std::string::npos)
        {
            int i = std::atoi(line.c_str());
            if (i < 10)
                Math.push(i);
            else
                return std::cout << "Error" << std::endl , 0;
        }
        else
        {
            if (Math.size() > 1 && line.size() == 1)
            {
                try
                {
                    int b = Math.top();
                    Math.pop();
                    int a = Math.top();
                    Math.pop();
                    Math.push(Calculation(a, b, line));
                }
                catch(const char* e)
                {
                    return std::cerr << "Error: " << e << std::endl , 0;
                }
            }
            else
                return std::cerr << "Error" << std::endl, 0;
        }
    }
    if (Math.size() != 1)
        return std::cerr << "Error" << std::endl, 0;
    return 1;
}
