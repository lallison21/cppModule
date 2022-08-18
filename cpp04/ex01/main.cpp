#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {

	Animal *animals[4];

	for (int i = 0; i < 4; i++) {
		if (i < 2) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat;
		}
		animals[i]->makeSound();
	}

	animals[0]->setIdeas("Hello");
	animals[0]->setIdeas("World");
	animals[0]->setIdeas("mmmmmmm\n");
	std::cout << animals[0]->getType() << std::endl;
	animals[0]->showIdeas();
	std::cout << "before copying" << std::endl;
	std::cout << animals[3]->getType() << std::endl;
	animals[3]->showIdeas();
	delete animals[3];
	std::cout << "after copying" << std::endl;
	animals[3] = animals[0];
	std::cout << animals[3]->getType() << std::endl;
	animals[3]->showIdeas();
	for(int i = 0; i < 3; i++) {
		delete animals[i];
	}
	return 0;
}
