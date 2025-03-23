#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other){
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other){
        Animal::operator = (other);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << this->type << " meow" << std::endl;
}
