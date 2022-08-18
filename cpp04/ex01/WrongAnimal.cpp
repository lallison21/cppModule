#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor is called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal WrongAnimal) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = WrongAnimal._type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "The WrongAnimal makes a sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}
