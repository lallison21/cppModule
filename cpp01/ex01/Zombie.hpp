#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

private:
	std::string name;

public:
	void announce();
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	setName(std::string name);
};

Zombie*	newZombie(std::string name);
Zombie* zombieHorn(int N, std::string name);
void	randomChump(std::string name);

#endif