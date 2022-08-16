#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Standard ScavTrap constructor was called" << std::endl;
	this->setName("None");
	this->setHp(100);
	this->setEnergy(50);
	this->setDamage(20);
	this->guard = 0;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap " << this->getName() << " was called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Constructor ScavTrap " << name << " was called" << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setEnergy(50);
	this->setDamage(20);
	this->guard = 0;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEnergy(other.getEnergy());
	this->setDamage(other.getDamage());
	std::cout <<"Copy assignment operator called" << std::endl;
	return (*this);
}

void ScavTrap::guardGate() {
	if (this->guard == 1) {
		this->guard = 0;
		std::cout << this->getName() << " exited the Gate keeper mode." << std::endl;
	} else if (this->guard == 0) {
		this->guard = 1;
		std::cout << this->getName() << " the Gate keeper mode activated." << std::endl;
	}
}

void ScavTrap::attack(const std::string &target) {
	if (this->getHp() < 1){
		std::cout << this->getName() << " died." << std::endl;
		return;
	}

	if (this->getEnergy() > 0) {
		std::cout << "ScavTrap " + this->getName() + " attacks " + target +
					 ", causing " << this->getDamage()
				  << " points of damage" << std::endl;
	} else {
		std::cout << "There is no energy" << std::endl;
	}
}
