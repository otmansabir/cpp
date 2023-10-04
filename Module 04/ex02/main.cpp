/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:42:54 by osabir            #+#    #+#             */
/*   Updated: 2023/10/02 16:12:04 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{
	Cat *Catx = new Cat();
	Dog *Dogx = new Dog();

	for (int i = 0; i < 10; i++)
	{
		Catx->makeSound();
		Dogx->makeSound();
	}
	delete Catx;
	delete Dogx;

    return 0;
}