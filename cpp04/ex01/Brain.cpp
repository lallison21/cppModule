#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor is called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "";
	}
	this->index = 0;
}

Brain::~Brain() {
	std::cout << "Brain destructor is called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	std::cout << "Brain copy constructor is called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = brain.ideas[i];
	}
}

Brain &Brain::operator=(const Brain brain) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &brain) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = brain.ideas[i];
		}
	}
	return *this;
}

void Brain::setIdeas(std::string idea) {
	if (this->index == 100) {
		this->index = 0;
	}
	this->ideas[this->index] = idea;
	this->index++;
}

void Brain::showIdeas() {
	int flag = 0;
	for (int i = 0; i < 100; i++) {
		if (this->ideas[i].size() != 0) {
			std::cout << this->ideas[i] << std::endl;
			flag = 1;
		}
	}
	if (flag == 0) {
		std::cout << "no ideas" << std::endl;
	}
}
