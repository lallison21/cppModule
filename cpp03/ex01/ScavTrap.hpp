#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:
	static const int maxHitPoint = 100;
	int guard;

public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	ScavTrap &operator=(ScavTrap const &other);
	void attack(const std::string &target);
	void guardGate();
};

#endif
