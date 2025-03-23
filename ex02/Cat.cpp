#include "Cat.hpp"

Cat::Cat() : AbstractAnimal("Cat"), brain(new Brain()) {
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AbstractAnimal(other), brain(new Brain(*other.brain)) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(const Cat &src) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &src){
        AbstractAnimal::operator = (src);
        delete this->brain;
        this->brain = new Brain(*src.brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->type << " meow" << std::endl;
}

void Cat::setIdea(size_t index, const std::string &idea) {
    this->brain->setIdea(index, idea);
}

const std::string &Cat::getIdea(size_t index) const {
    return this->brain->getIdea(index);
}
