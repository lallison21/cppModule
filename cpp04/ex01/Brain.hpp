#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

private:
	std::string ideas[100];
	int index;

public:
	Brain();
	~Brain();
	Brain(const Brain &brain);
	Brain &operator=(const Brain brain);
	void setIdeas(std::string idea);
	void showIdeas();
};

#endif
