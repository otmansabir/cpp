/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:58:48 by osabir            #+#    #+#             */
/*   Updated: 2023/09/12 15:21:49 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void f()
{
	system("leaks zombie")
}

int	main()
{
	atexit(f);
	Zombie *creatZombie;
	creatZombie = newZombie("boo");
	creatZombie->announce();
	randomChump("boo2");
	randomChump("boo3");
	randomChump("boo4");
	delete creatZombie;
}