#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor is called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor is called" << std::endl;
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat copy constructor is called" << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat cat) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = cat._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Tha cat purrs" << std::endl;
}
