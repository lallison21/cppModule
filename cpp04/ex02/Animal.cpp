#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor is called" << std::endl;
	this->_type = "Animal";
}

Animal::~Animal() {
	std::cout << "Animal destructor is called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = animal._type;
	return *this;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::setIdeas(std::string idea) {
	this->_idea = idea;
}

void Animal::showIdeas() {
}
