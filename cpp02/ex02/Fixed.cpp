#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
}

Fixed::Fixed(const int number) : value(number << this->bits) {
}

Fixed::Fixed(const float number) : value(roundf(number * (1 << this->bits))) {
}

int Fixed::getRaw() const {
	return this->value;
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &object) {
	this->value = object.getRaw();
}

Fixed &Fixed::operator=(const Fixed &object) {
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

bool Fixed::operator==(const Fixed &object) {
	return (this->value == object.value);
}

bool Fixed::operator>(const Fixed &object) const {
	return (this->value > object.value);
}

bool Fixed::operator<(const Fixed &object) const {
	return (this->value < object.value);
}

bool Fixed::operator<=(const Fixed &object) const {
	return (this->value <= object.value);
}

bool Fixed::operator>=(const Fixed &object) const {
	return (this->value >= object.value);
}

Fixed Fixed::operator/(const Fixed &object) {
	return Fixed (this->toFloat() / object.toFloat());
}

Fixed Fixed::operator+(const Fixed &object) {
	return Fixed (this->toFloat() + object.toFloat());
}

Fixed Fixed::operator*(const Fixed &object) {
	return Fixed (this->toFloat() * object.toFloat());
}

bool Fixed::operator!=(const Fixed &object) {
	return (this->value != object.value);
}

Fixed &Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator-(const Fixed &object) {
	return (this->value - object.value);
}

Fixed &Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp (*this);
	this->value++;
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp (*this);
	this->value--;
	return tmp;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return a;
	return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a > b)
		return b;
	return a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a > b)
		return b;
	return a;
}
