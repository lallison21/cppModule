#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>

class ClapTrap {

private:
	std::string name;
	unsigned int hp;
	unsigned int energy;
	unsigned int damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	void printInfo();
	std::string getName() const ;
	unsigned int getHp() const ;
	unsigned int getEnergy() const ;
	unsigned int getDamage() const ;
	void setName(std::string name);
	void setHp(unsigned int hp);
	void setEnergy(unsigned int energy);
	void setDamage(unsigned int damage);
};

#endif
