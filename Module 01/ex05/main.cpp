/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:42:23 by osabir            #+#    #+#             */
/*   Updated: 2023/09/15 17:37:56 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{
    Harl call;
    call.complain("DEBUG");
    call.complain("INFO");
    call.complain("WARNING");
    call.complain("ERROR");
    call.complain("osabir");
    return 0;
}