#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "The DiamondTrap constructor called" << std::endl;
	this->name = "_";
	ClapTrap::name = this->name + "clap_name";
	this->hp = FragTrap::getHp();
	this->energy = ScavTrap::getEnergy();
	this->damage = FragTrap::getDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {
	std::cout << "The DiamondTrap constructor from " << name << "is called" << std::endl;
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hp = FragTrap::getHp();
	this->energy = ScavTrap::getEnergy();
	this->damage = FragTrap::getDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	std::cout << "Copy constructor is called" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "the DiamondTrap destructor is called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout <<"Copy assignment operator called" << std::endl;
	this->name = other.getName();
	this->hp = other.getHp();
	this->energy = other.getEnergy();
	this->damage = other.getDamage();
	return  (*this);
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->name << " clapTrap name : " <<
			  ClapTrap::name << " HP : " << this->getHp() << " Energy: " <<
			  this->getEnergy() << " Damage: " << this->getDamage() <<
			  std::endl;
}
