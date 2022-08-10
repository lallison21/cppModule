#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name) {
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack() {
	if (!_weapon) {
		std::cout << _name << " tries to attack but has no weapon" << std::endl;
	} else {
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
}
