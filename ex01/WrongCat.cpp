#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src){
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &src){
        WrongAnimal::operator = (src);
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << this->type << " meow" << std::endl;
}
