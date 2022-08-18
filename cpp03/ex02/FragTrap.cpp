#include "FragTrap.hpp"

FragTrap::FragTrap() {
	setHp(100);
	setEnergy(100);
	setDamage(20);
	std::cout << "The FragTrap constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
		setHp(100);
		setEnergy(100);
		setDamage(30);
		std::cout << "the " << this->getName() << "Constructor FragTrap is called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "The FragTrap destructor from " << this->getName() << " is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout <<"Copy assignment operator called" << std::endl;
	setName(other.getName());
	setHp(other.getHp());
	setEnergy(other.getEnergy());
	setDamage(other.getDamage());
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << this->getName() << " give me a five!" << std::endl;
}