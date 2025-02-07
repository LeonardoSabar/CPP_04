/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:38:51 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/05 11:38:51 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();

    j->makeSound();
    meta->makeSound();


    std::cout << std::endl << RED << "\n --- Wrong animal test ---\n" << RST << std::endl;

    const wrongCat *thunder = new wrongCat();
    std::cout << thunder->getType() << " " << std::endl;
    thunder->makeSound();
    std::cout << std::endl;

    const wrongAnimal *light = new wrongCat();
    std::cout << light->getType() << " " << std::endl;
    light->makeSound();
    std::cout << std::endl;

    const Animal *k = new Dog();
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
    std::cout << std::endl;

    const wrongAnimal *l = new wrongCat();
    std::cout << l->getType() << " " << std::endl;
    l->makeSound();
    std::cout << std::endl;

    delete thunder;
    delete light;
    delete meta;
    delete i;
    delete j;
    delete k;
    delete l;

return 0;
}
