#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class wrongCat : public wrongAnimal
{
public:
	wrongCat();
	wrongCat(wrongCat const &other);
	~wrongCat();

	wrongCat &operator=(wrongCat const &other);

	void makeSound() const;
};

#endif 