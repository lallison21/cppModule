#include "Zombie.hpp"

int main() {
	Zombie *zombie = zombieHorn(8, "lallison");
	Zombie *zombie1 = zombieHorn(8, "kferterb");

	if (!zombie)
		return 1;

	for (int i = 0; i < 8; ++i) {
		zombie->announce();
		zombie1->announce();
	}
	delete[] zombie;
	delete[] zombie1;
	return 0;
}