/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:37:37 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/05 11:37:37 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"


Cat::Cat() : Animal("Cat")
{
    this->_type = Animal::getType();
    std::cout << P << "Cat created!" << RST << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->_type = Animal::getType();
    std::cout << P << "Cat created!" << RST << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << P << "Cat copied!" << RST << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    Animal::operator=(other);
    return *this;
}

Cat::~Cat()
{
    std::cout << P << "Cat destroyed!" << RST << std::endl;
}


void Cat::makeSound() const
{
    std::cout << P << "Meow!" << RST << std::endl;
}