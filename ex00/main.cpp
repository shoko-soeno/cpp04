#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "===Animal test===" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	dog->makeSound();  // Dog's sound
	cat->makeSound();  // Cat's sound

	delete dog;
	delete cat;

	std::cout << "\n===Wrong Animal test===" << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();

	wrongCat->makeSound();  // WrongAnimal's sound (not WrongCat)

	delete wrongCat;
}

