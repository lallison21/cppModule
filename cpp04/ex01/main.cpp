#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {

	Animal *animals[10];

	for (int i = 0; i < 10; i++) {
		if (i < 5) {
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
	std::cout << animals[9]->getType() << std::endl;
	animals[9]->showIdeas();
	delete animals[9];
	std::cout << "after copying" << std::endl;
	animals[9] = animals[0];
	std::cout << animals[9]->getType() << std::endl;
	animals[9]->showIdeas();
	for(int i = 0; i < 9; i++) {
		delete animals[i];
	}
	return 0;
}
