/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:01:02 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/06 21:01:02 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main() {
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

    return 0;
}