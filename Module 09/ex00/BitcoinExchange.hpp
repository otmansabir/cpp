/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:12:53 by osabir            #+#    #+#             */
/*   Updated: 2024/11/12 17:59:58 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <map>
#include <cstdlib> 
# include <iomanip>

class Bitcoin
{
    private:
        std::map<std::string , double>  Data;
        std::string                     TimeZone;
        double                          Convert;
        bool                            lower;
    public:
        Bitcoin();
        Bitcoin(Bitcoin const &B);
        Bitcoin &operator=(Bitcoin const &B);
        ~Bitcoin();
        
        void Exchange(const std::string input);
        void ReadDataBaseFile();
        void ParsingInput(const std::string input);
        void ParsingDate(std::string input);
        void ParsingValue(std::string Value);
};

#endif