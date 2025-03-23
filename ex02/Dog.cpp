#include "Dog.hpp"

Dog::Dog() : AbstractAnimal("Dog"), brain(new Brain()){
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : AbstractAnimal(src), brain(new Brain(*src.brain)){
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(const Dog &src) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &src){
        AbstractAnimal::operator = (src);
        delete brain;
        this->brain = new Brain(*src.brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << this->type << " woof" << std::endl;
}

void Dog::setIdea(size_t index, const std::string &idea) {
    this->brain->setIdea(index, idea);
}

const std::string &Dog::getIdea(size_t index) const {
    return this->brain->getIdea(index);
}
