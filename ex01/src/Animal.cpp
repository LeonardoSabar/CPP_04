/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:20:42 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/05 13:20:42 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"


Animal::Animal(std::string type) : _type(type)
{
    std::cout << B << "Animal created with type: " << RST << _type << std::endl;
}


Animal::Animal() : _type("Unknown")
{
    std::cout << B << "Unknown animal created!" << RST << std::endl;
}


Animal::Animal(const Animal &other) : _type(other._type)
{
    std::cout << B <<  "Animal copied!" << RST << std::endl;
}


Animal::~Animal()
{
    std::cout << B << "Animal destroyed!" << RST << std::endl;
}


Animal &Animal::operator=(const Animal &other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}


void Animal::makeSound(void) const
{
    std::cout << B << "Some animal sounds, unknown so far!" << RST << std::endl;
}


std::string Animal::getType(void) const
{
    return(this->_type);
}


void Animal::setType(std::string type)
{
    this->_type = type;
}