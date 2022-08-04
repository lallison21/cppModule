#include "Zombie.hpp"

int main() {
	Zombie *zombie;
	randomChump("lallison");
	zombie = newZombie("kferterb");
	zombie->announce();
	delete zombie;
	return 0;
}