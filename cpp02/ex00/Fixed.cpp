#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = object.getRaw();
}

int Fixed::getRaw() const {
	std::cout << "getRaw member function called" << std::endl;
	return this->value;
}

void Fixed::setRaw(const int raw) {
	this->value = raw;
}

Fixed &Fixed::operator=(const Fixed &object) {
	std::cout <<"Copy assignment operator called" << std::endl;
	this->value = object.getRaw();
	return *this;
}



