#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (size_t i = 0; i < Brain::maxIdeas; i++)
        this->ideas[i] = src.ideas[i];
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this == &src)
        return *this;
    for (size_t i = 0; i < Brain::maxIdeas; i++)
        this->ideas[i] = src.ideas[i];
    return *this;
}

void Brain::setIdea(size_t index, const std::string &idea)
{
    if (index < Brain::maxIdeas)
        this->ideas[index] = idea;
    else
        std::cout << "Index out of bounds" << std::endl;
}

const std::string &Brain::getIdea(size_t index) const
{
    if (index >= Brain::maxIdeas)
        throw std::out_of_range("Index out of bounds");
    return this->ideas[index];
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
