#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) : value(number << this->bits) {
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float number) : value(roundf(number * (1 << this->bits))) {
	std::cout << "Float constructor called\n";
}

int Fixed::getRaw() const {
	std::cout << "getRaw member function called" << std::endl;
	return this->value;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = object.getRaw();
}

Fixed &Fixed::operator=(const Fixed &object) {
	std::cout <<"Copy assignment operator called" << std::endl;
	this->value = object.getRaw();
	return *this;
}

void Fixed::setRaw(const int raw) {
	this->value = raw;
}

std::ostream &operator << (std::ostream &out, const Fixed  &fix) {
	out << fix.toFloat();
	return out;
}

float Fixed::toFloat() const {
	return ((double)this->value / (double)(1 << this->bits));
}

int Fixed::toInt() const {
	return (this->value >> this->bits);
}
