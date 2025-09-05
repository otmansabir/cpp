/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 10:45:12 by osabir            #+#    #+#             */
/*   Updated: 2024/10/01 19:35:30 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE_HPP
# define SCALARCONVERTE_HPP

# include <iostream>
# include <limits>
# include <cctype>
# include <iomanip>

class ScalarConverte
{
    private:
        ScalarConverte();
        
    public:
        ~ScalarConverte();
        static void convert(std::string const input);
};

#endif