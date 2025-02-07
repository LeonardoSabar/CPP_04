#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

class Animal
{
    protected:
        std::string _type;

    public:
        Animal(void);
        Animal(std::string type);
        Animal(const Animal &other);
        virtual ~Animal(void);

        Animal &operator=(const Animal &other);

        std::string getType(void) const;
        void setType(std::string type);
        
        virtual void makeSound(void) const;
};

#endif