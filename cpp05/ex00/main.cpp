#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat bureaucrat = Bureaucrat();
		Bureaucrat bureaucrat1 = Bureaucrat("Bob", 20);
		Bureaucrat high = Bureaucrat("Halk", 0);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat low = Bureaucrat("Gnome", 160);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}
