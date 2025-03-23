#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : type(type){
    std::cout << "Animal param constructor called" << std::endl;
}

Animal::Animal(const Animal &animal){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &animal){
        this->type = animal.type;
    }
    return *this;
}

const std::string &Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << this->type << " makes default sound" << std::endl;
}
