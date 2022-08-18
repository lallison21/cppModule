#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){

	ClapTrap clap("Clap");
	ClapTrap trap("Trap");
	ScavTrap scav("scav");
	FragTrap frag("frag");

	clap.attack(trap.getName());
	frag.attack(clap.getName());
	trap.takeDamage(clap.getDamage());
	trap.beRepaired(3);
	trap.takeDamage(5);
	trap.beRepaired(2);
	scav.attack(clap.getName());
	scav.takeDamage(3);
	scav.beRepaired(3);
	frag.takeDamage(trap.getDamage());
	frag.beRepaired(4);
	trap.printInfo();
	clap.printInfo();
	frag.printInfo();
}
