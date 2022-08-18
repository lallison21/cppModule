#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->_name = "defaultName";
	this->_hp = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << "The constructor is called" << std::endl;
	printInfo();
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hp = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << "The constructor is called" << std::endl;
	printInfo();
}

ClapTrap::~ClapTrap() {
	std::cout << "The destructor from " + this->_name + " called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->getHp() < 1) {
		std::cout << this->getName() << " died." << std::endl;
		return;
	}

	if (this->getEnergy() > 0) {
		std::cout << "ClapTrap " + this->_name + " attacks " + target +
					 ", causing " << this->getDamage()
				  << " points of damage" << std::endl;
	} else
		std::cout << "There is no energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hp > 0) {
		if (this->_hp < amount)
			this->_hp = 0;
		else
			this->_hp = this->_hp - amount;
		std::cout << this->_name << " received damage" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->getHp() < 1){
		std::cout << this->getName() << " died." << std::endl;
		return;
	}
	if (this->_hp < 10) {
		if (this->_hp + amount > 10)
			this->_hp = 10;
		else
			this->_hp = this->_hp + amount;
		std::cout << this->_name << " recovered" << std::endl;
	}
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout <<"Copy assignment operator called" << std::endl;
	this->_name = other.getName();
	this->_hp = other.getHp();
	this->_energy = other.getEnergy();
	this->_damage = other.getDamage();
	return  (*this);
}

void ClapTrap::printInfo() {
	std::cout << "Name: " << this->_name << " HP: " << this->_hp << " Energy: " <<
			  this->_energy << std::endl;
}

std::string ClapTrap::getName() const {
	return this->_name;
}

unsigned int ClapTrap::getHp() const {
	return this->_hp;
}

unsigned int ClapTrap::getEnergy() const {
	return this->_energy;
}

unsigned int ClapTrap::getDamage() const {
	return this->_damage;
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

void ClapTrap::setHp(unsigned int hp) {
	this->_hp = hp;
}

void ClapTrap::setEnergy(unsigned int energy) {
	this->_energy = energy;
}

void ClapTrap::setDamage(unsigned int damage) {
	this->_damage = damage;
}
