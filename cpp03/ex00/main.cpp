#include "ClapTrap.hpp"

int main(void){

	ClapTrap clap("Clap");
	ClapTrap trap("Trap");

	clap.attack(trap.getName());
	trap.takeDamage(clap.getDamage());
	trap.beRepaired(3);
	trap.takeDamage(5);
	trap.beRepaired(2);
	trap.printInfo();
	clap.printInfo();
}
