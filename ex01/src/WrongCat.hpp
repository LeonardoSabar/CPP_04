/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:14:18 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/07 17:14:18 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

wrongCat::wrongCat()
{
	_type = "wrongCat";
	std::cout << "wrongCat constructor called." << std::endl;
}

wrongCat::wrongCat(wrongCat const &other) : wrongAnimal(other)
{
	std::cout << "wrongCat copy constructor called." << std::endl;
	*this = other;
}

wrongCat::~wrongCat()
{
	std::cout << "wrongCat destructor called." << std::endl;
}

wrongCat &wrongCat::operator=(wrongCat const &other)
{
	std::cout << "wrongCat assignment operator called." << std::endl;
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);	
}

void wrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}