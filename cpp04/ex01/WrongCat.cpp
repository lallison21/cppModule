#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor is called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) {
	std::cout << "WrongCat copy constructor is called" << std::endl;
	*this = wrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat wrongCat) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_type = wrongCat._type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Tha WrongCat purrs" << std::endl;
}
