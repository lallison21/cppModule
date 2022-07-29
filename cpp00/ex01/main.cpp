#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main() {

	PhoneBook	phoneBook;
	string		cmd;

	phoneBook.getMain();
	while (true) {
		cout << "Enter the command:" << endl;
		getline(cin, cmd);

		if (cmd == "EXIT") {
			cout << "GoodBye!!!" << endl;
			break ;
		} else if (cmd == "ADD") {
			phoneBook.addContact();
		} else if (cmd == "SEARCH") {
			phoneBook.searchContact();
		} else {
			cout << "Error: Command " << cmd << " not found" << endl;
		}
	}
	return (0);
}