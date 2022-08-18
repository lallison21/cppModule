#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Standard ScavTrap constructor was called\n";
	this->setName("None");
	this->setHp(100);
	this->setEnergy(50);
	this->setDamage(20);
	this->guard = 0;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap " << this->getName() << " was called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Constructor ScavTrap " << name << " was called\n";
	this->setName(name);
	this->setHp(100);
	this->setEnergy(50);
	this->setDamage(20);
	this->guard = 0;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Copy constructor is called\n";
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	this->setName(other.getName());
	this->setHp(other.getHp());
	this->setEnergy(other.getEnergy());
	this->setDamage(other.getDamage());
	std::cout <<"Copy assignment operator called\n";
	return (*this);
}

void ScavTrap::guardGate() {
	if (this->guard == 1) {
		this->guard = 0;
		std::cout << this->getName() << " exited the Gate keeper mode.\n";
	} else if (this->guard == 0) {
		this->guard = 1;
		std::cout << this->getName() << " the Gate keeper mode activated.\n";
	}
}

void ScavTrap::attack(const std::string &target) {
	if (this->getHp() < 1){
		std::cout << this->getName() << " died.\n";
		return;
	}

	if (this->getEnergy() > 0) {
		std::cout << "ScavTrap " + this->getName() + " attacks " + target +
					 ", causing " << this->getDamage()
				  << " points of damage\n";
	} else {
		std::cout << "There is no energy\n";
	}
}
