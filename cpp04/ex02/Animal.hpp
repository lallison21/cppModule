#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Animal {

protected:
	std::string _type;
	std::string _idea;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &animal);
	Animal &operator=(const Animal &animal);
	virtual void makeSound() const = 0;
	std::string getType() const;
	virtual void setIdeas(std::string idea);
	virtual void showIdeas();
};

#endif
