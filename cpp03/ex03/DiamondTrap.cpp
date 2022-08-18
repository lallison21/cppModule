#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "The DiamondTrap constructor called" << std::endl;
	this->name = "_";
	ClapTrap::_name = this->_name + "clap_name";
	this->_hp = FragTrap::getHp();
	this->_energy = ScavTrap::getEnergy();
	this->_damage = FragTrap::getDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {
	std::cout << "The DiamondTrap constructor from " << name << "is called" << std::endl;
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hp = FragTrap::getHp();
	this->_energy = ScavTrap::getEnergy();
	this->_damage = FragTrap::getDamage();
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
	this->_name = other.getName();
	this->_hp = other.getHp();
	this->_energy = other.getEnergy();
	this->_damage = other.getDamage();
	return  (*this);
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->name << " clapTrap name : " <<
			  ClapTrap::_name << " HP : " << this->getHp() << " Energy: " <<
			  this->getEnergy() << " Damage: " << this->getDamage() <<
			  std::endl;
}
