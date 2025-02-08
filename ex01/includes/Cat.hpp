#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &other);
		~Cat(void);

		Cat &operator=(const Cat &other);

		void makeSound(void) const override;
		Brain *getBrain(void) const;
};

#endif
