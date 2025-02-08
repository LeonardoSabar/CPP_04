/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:18:48 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/08 11:47:29 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"


Cat::Cat() : Animal("Cat")
{
	_type = "Cat";
	this->brain = new Brain();
	std::cout << P << "Cat created!" << RST << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	brain = new Brain();
	std::cout << P << "Cat created!" << RST << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << P << "Cat copied!" << RST << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << P << "Cat destroyed!" << RST << std::endl;
}

void Cat::makeSound() const
{
	std::cout << P << "Meow!" << RST << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}
