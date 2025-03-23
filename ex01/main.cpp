#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

// appropriate destructors must be called in expected order
void runArrayTest() {
	const size_t animalCount = 4;
	Animal *animals[animalCount];
	for (size_t i = 0; i < animalCount / 2; i++)
		animals[i] = new Dog();
	for (size_t i = animalCount / 2; i < animalCount; i++)
		animals[i] = new Cat();

	for (size_t i = 0; i < animalCount; i++)
		delete animals[i];
}

// Brain must be copied deeply
void runDeepCopyTest() {
	Dog a1;
	size_t i = 0;
	a1.setIdea(i, "idea1");

	std::cout << "a1 idea[0]: " << a1.getIdea(i) << std::endl;
	std::cout << "a1 idea[1]: " << a1.getIdea(i+1) << std::endl;

	Dog a2;
	a2 = a1;
	a2.setIdea(i, "IDEA1");
	a2.setIdea(i+1, "IDEA2");

	std::cout << "copied a1 to a2" << std::endl;

	std::cout << "a1 idea[0]: " << a1.getIdea(i) << std::endl;
	std::cout << "a1 idea[1]: " << a1.getIdea(i+1) << std::endl;
	std::cout << "a2 idea[0]: " << a2.getIdea(i) << std::endl;
	std::cout << "a2 idea[1]: " << a2.getIdea(i+1) << std::endl;
}

void copyTest() {
	Dog dog;
	size_t i = 0;
	dog.setIdea(i, "dog");
	{
		Dog tmp = dog;
		tmp.setIdea(i, "tmp");
		std::cout << "tmp idea[0]: " << tmp.getIdea(i) << std::endl;
	}
	// dog's brain must not be deleted
	// dog's brain must not be overwritten
	std::cout << "dog idea[0]: " << dog.getIdea(i) << std::endl;
}

int main() {
	std::cout << "===TEST===" << std::endl;
	copyTest();

	std::cout << std::endl << "===ARRAY===" << std::endl;
	runArrayTest();

	std::cout << std::endl << "===DEEP COPY===" << std::endl;
	runDeepCopyTest();
}
