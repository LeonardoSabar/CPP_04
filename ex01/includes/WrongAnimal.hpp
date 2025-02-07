#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class wrongAnimal
{
protected:
	std::string _type;

public:

	wrongAnimal();
	wrongAnimal(wrongAnimal const &other);
	~wrongAnimal();

	wrongAnimal &operator=(wrongAnimal const &other);

	std::string getType(void) const;
	void makeSound() const;
};

#endif