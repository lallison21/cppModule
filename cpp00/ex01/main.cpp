#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main() {

	PhoneBook		phoneBook;
	std::string		cmd;

	phoneBook.getMain();
	while (true) {
		std::cout << "Enter the command:" << std::endl;
		getline(std::cin, cmd);

		if (cmd == "EXIT" || cmd == "exit") {
			std::cout << "GoodBye!!!" << std::endl;
			break ;
		} else if (cmd == "ADD" || cmd == "add") {
			phoneBook.addContact();
		} else if (cmd == "SEARCH" || cmd == "search") {
			phoneBook.searchContact();
		} else {
			std::cout << "Error: Command " << cmd << " not found" << std::endl;
		}
	}
	return (0);
}