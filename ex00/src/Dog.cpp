/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:29:57 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/08 11:45:47 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

//########################  Constructor and destructor  ########################

Dog::Dog() : Animal("Dog")
{
	this->_type = Animal::getType();
	std::cout << GD << "Dog created!" << RST << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	this->_type = Animal::getType();
	std::cout << GD << "Dog created!" << RST << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << GD << "Dog copied!" << RST << std::endl;
}

Dog::~Dog()
{
	std::cout << GD << "Dog destroyed!" << RST << std::endl;
}


//################################  Operator  ##################################

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}


//#############################  Member function  #############################

void Dog::makeSound() const
{
	std::cout << GD << "Woof!" << RST << std::endl;
}
