#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type){
    std::cout << "WrongAnimal param constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) : type(animal.type){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal) {
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if (this != &animal){
        this->type = animal.type;
    }
    return *this;
}

const std::string &WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << this->type << " makes default sound" << std::endl;
}
