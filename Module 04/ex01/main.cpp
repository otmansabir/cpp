/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:42:54 by osabir            #+#    #+#             */
/*   Updated: 2023/10/04 03:46:10 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void f(void)
{
	system("leaks poly");
}

int main()
{
	atexit(f);
	const Animal *j[] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
		j[i]->makeSound();
	for (int i = 0; i < 4; i++)
		delete j[i];
    return 0;
}