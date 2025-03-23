#include "AbstractAnimal.hpp"

AbstractAnimal::AbstractAnimal() : type("AbstractAnimal") {
    std::cout << "AbstractAnimal default constructor called" << std::endl;
}

AbstractAnimal::AbstractAnimal(const std::string &type) : type(type){
    std::cout << "AbstractAnimal param constructor called" << std::endl;
}

AbstractAnimal::AbstractAnimal(const AbstractAnimal &animal) {
    std::cout << "AbstractAnimal copy constructor called" << std::endl;
    *this = animal;
}

AbstractAnimal::~AbstractAnimal(){
    std::cout << "AbstractAnimal destructor called" << std::endl;
}

AbstractAnimal &AbstractAnimal::operator=(const AbstractAnimal &animal) {
    std::cout << "AbstractAnimal copy assignment operator called" << std::endl;
    if (this != &animal){
        this->type = animal.type;
    }
    return *this;
}

const std::string &AbstractAnimal::getType() const {
    return this->type;
}

void AbstractAnimal::makeSound() const {
    std::cout << this->type << " makes default sound" << std::endl;
}
