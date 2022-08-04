#include "Zombie.hpp"

Zombie::Zombie() {
	this->name = "Zombie";
}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << this->name << " the zombie is dead\n";
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ…\n";
}
