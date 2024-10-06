/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:45:40 by osabir            #+#    #+#             */
/*   Updated: 2024/10/02 11:07:08 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data date(42);
    uintptr_t raw = Serializer::serialize(&date);
    Data *Rdate = Serializer::deserialize(raw);
    
    if (Rdate == &date)
        std::cout << "serialize() == deserialize() is successeful" << std::endl;
    else
        std::cout << "serialize() != deserialize() is failed" << std::endl;
}
