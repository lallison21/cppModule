#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->name = "defaultName";
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
	std::cout << "The constructor is called" << std::endl;
	printInfo();
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
	std::cout << "The constructor is called" << std::endl;
	printInfo();
}

ClapTrap::~ClapTrap() {
	std::cout << "The destructor from " + this->name + " called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->getHp() < 1) {
		std::cout << this->getName() << " died." << std::endl;
		return;
	}

	if (this->getEnergy() > 0) {
		std::cout << "ClapTrap " + this->name + " attacks " + target +
					 ", causing " << this->getDamage()
				  << " points of damage" << std::endl;
	} else
		std::cout << "There is no energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp > 0) {
		if (this->hp < amount)
			this->hp = 0;
		else
			this->hp = this->hp - amount;
		std::cout << this->name << " received damage" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getHp() < 1){
		std::cout << this->getName() << " died." << std::endl;
		return;
	}
	if (this->hp < 10) {
		if (this->hp + amount > 10)
			this->hp = 10;
		else
			this->hp = this->hp + amount;
		std::cout << this->name << " recovered" << std::endl;
	}
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout <<"Copy assignment operator called" << std::endl;
	this->name = other.getName();
	this->hp = other.getHp();
	this->energy = other.getEnergy();
	this->damage = other.getDamage();
	return  (*this);
}

void ClapTrap::printInfo() {
	std::cout << "Name: " << this->name << " HP: " << this->hp << " Energy: " <<
			  this->energy << std::endl;
}

std::string ClapTrap::getName() const {
	return this->name;
}

unsigned int ClapTrap::getHp() const {
	return this->hp;
}

unsigned int ClapTrap::getEnergy() const {
	return this->energy;
}

unsigned int ClapTrap::getDamage() const {
	return this->damage;
}

void ClapTrap::setName(std::string name) {
	this->name = name;
}

void ClapTrap::setHp(unsigned int hp) {
	this->hp = hp;
}

void ClapTrap::setEnergy(unsigned int energy) {
	this->energy = energy;
}

void ClapTrap::setDamage(unsigned int damage) {
	this->damage = damage;
}
