/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:04:16 by osabir            #+#    #+#             */
/*   Updated: 2024/10/02 10:27:56 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

ScalarConverte::ScalarConverte()
{
}

ScalarConverte::~ScalarConverte()
{
}

int checkIFDigitOrCharacter(const char *input)
{
    size_t character = 0, charF = 0, i = 0;
    char *end;
    double num;
    num = strtod(input, &end);
    
    while (end[i])
    {
        if (end[i] == 'f')
            charF++;
        else
            character++;
        i++;
    }
    if (charF <= 1 && character == 0)
        return 2;
    return -1;
}

int parsing(std::string const &input)
{
    int value = -1;
    if (input.length() == 1 && !isdigit(input[0]))
        value = 0;
    else
        value =  checkIFDigitOrCharacter(input.c_str());
    return value;
}

void ScalarConverte::convert(std::string const input)
{
    if (input.empty())
    {
        std::cerr << "Error: EMPTY STRING" << std::endl;
        return ;
    }
    int RValue = parsing(input);
    char    *end;
    double DValue = strtod(input.c_str(), &end);
    if (RValue == 0)
    {
        char c  = input[0];
        if (isprint(c))
            std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
        else
            std::cout << "char: Non displayable"  << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: "<< std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
    }
    else if (RValue == 2)
    {
        {
            if (isprint(static_cast<int>(DValue)))
                std::cout << "char: '" << static_cast<char>(DValue) << "'" << std::endl;
            else if (static_cast<long long>(DValue) < 255 && static_cast<long long>(DValue) >= 0 && !isprint(static_cast<long long>(DValue)))
                std::cout << "char: Non displayable"  << std::endl;
            else
                std::cout << "char: impossible" << std::endl;
        } 
        if (INT_MAX < static_cast<long long>(DValue) || INT_MIN > static_cast<long long>(DValue))
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(DValue) << std::endl;
        std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(DValue) << "f" << std::endl;
        std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(DValue) << std::endl;
    }
    else if (RValue == -1)
        std::cerr << "Error: IN THE INPUT YOU GIVE IT TO ME" << std::endl;
}
