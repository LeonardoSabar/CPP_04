/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:00:17 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/06 21:00:17 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat created!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copied!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    Animal::operator=(other);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}