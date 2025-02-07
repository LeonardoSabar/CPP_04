/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:40:58 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/07 18:40:58 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

wrongCat::wrongCat()
{
	_type = "wrongCat";
	std::cout << "wrongCat constructor called." << std::endl;
}

wrongCat::wrongCat(wrongCat const &rhs) : wrongAnimal(rhs)
{
	std::cout << "wrongCat copy constructor called." << std::endl;
	*this = rhs;
}

wrongCat::~wrongCat()
{
	std::cout << "wrongCat destructor called." << std::endl;
}

wrongCat &wrongCat::operator=(wrongCat const &rhs)
{
	std::cout << "wrongCat assignment operator called." << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);	
}

void wrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}