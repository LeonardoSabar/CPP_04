/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:15:10 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/08 11:47:34 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"


Dog::Dog() : Animal("Dog")
{
	_type = "Dog";
	brain = new Brain();
	std::cout << GD << "Dog created!" << RST << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	brain = new Brain();
	std::cout << GD << "Dog created!" << RST << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << GD << "Dog copied!" << RST << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << GD << "Dog destroyed!" << RST << std::endl;
}

void Dog::makeSound() const
{
	std::cout << GD << "Woof!" << RST << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}
