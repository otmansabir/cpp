/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:00:24 by osabir            #+#    #+#             */
/*   Updated: 2024/10/02 11:01:28 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

struct Data
{
    private:
        unsigned long   Value;
        Data();
    public:
        Data(unsigned long value);
        ~Data();
        
};

class Serializer
{
    private:
        Serializer();
    
    public:
        ~Serializer();
        static Data* deserialize(uintptr_t raw);
        static uintptr_t serialize(Data* ptr);
};


#endif