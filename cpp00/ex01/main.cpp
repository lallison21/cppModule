#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main() {

	PhoneBook	phoneBook;
	string		cmd;

	phoneBook.getMain();
	while (true) {
		cout << "Enter the command:" << endl;
		getline(cin, cmd);

		if (cmd == "EXIT" || cmd == "exit") {
			cout << "GoodBye!!!" << endl;
			break ;
		} else if (cmd == "ADD" || cmd == "add") {
			phoneBook.addContact();
		} else if (cmd == "SEARCH" || cmd == "search") {
			phoneBook.searchContact();
		} else {
			cout << "Error: Command " << cmd << " not found" << endl;
		}
	}
	return (0);
}