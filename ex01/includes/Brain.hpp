#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain &other);
        ~Brain(void);

        Brain &operator=(const Brain &other);

        void setIdea(std::string const idea, std::size_t index);
        std::string getIdea(std::size_t index) const;
};

#endif