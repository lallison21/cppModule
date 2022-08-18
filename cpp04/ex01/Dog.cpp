#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor is called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor is called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &dog) {
	std::cout << "Dog copy constructor is called" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog dog) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = dog._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Tha dog barking" << std::endl;
}

void Dog::setIdeas(std::string idea) {
	this->brain->setIdeas(idea);
}

void Dog::showIdea() {
	this->brain->showIdeas();
}
