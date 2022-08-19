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

Dog::Dog(const Dog &Dog) {
    std::cout << "Dog copy constructor is called" << std::endl;
    *this = Dog;
}

Dog &Dog::operator=(const Dog Dog) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_type = Dog._type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Tha Dog barking" << std::endl;
}

void Dog::setIdeas(std::string idea) {
    this->brain->setIdeas(idea);
}

void Dog::showIdeas() {
    this->brain->showIdeas();
}
