/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:08:24 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/05 13:08:24 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << M << "Brain created!" << RST << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << M << "Brain copied!" << RST << std::endl;
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = other.ideas[i];
    }
    *this = other;
}
Brain::~Brain()
{
    std::cout << M << "Brain destroyed!" << RST << std::endl;
}


Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

void Brain::setIdea(std::string const idea, std::size_t index)
{
	if (index < 100)
        ideas[index] = idea;
    else
        std::cout << M << "Index out of range!" << RST << std::endl;
}

std::string Brain::getIdea(std::size_t index) const
{
    if (index < 100)
        return ideas[index];
    else
    {
        std::cout << M << "Index out of range!" << RST << std::endl;
        return "Without idea";
    }
}