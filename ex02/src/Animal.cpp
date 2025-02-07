/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 20:46:13 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/06 20:46:13 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal created with type: " << _type << std::endl;
}

Animal::Animal() : _type("Unknown")
{
    std::cout << "Animal created!" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
    std::cout << "Animal copied!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed!" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::setType(std::string type)
{
    _type = type;
}