/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:22:30 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/08 11:47:41 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	Animal* animals[4];

	for (int i = 0; i < 2; i++)
	{
		animals[i] = new Dog();
	}

	for (int i = 2; i < 4; i++)
	{
		animals[i] = new Cat();
	}

	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
	}

	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}

	Dog dog;
	Dog dog2(dog);
	Dog dog3;
	dog3 = dog2;

	std::cout << dog.getBrain() << std::endl;
	std::cout << dog2.getBrain() << std::endl;
	std::cout << dog3.getBrain() << std::endl;


	return 0;
}
