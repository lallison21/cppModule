#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->number = 0;
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::addContact() {

	if (this->number == 8 || this->number == 0) {
		this->contact[0].setData();
		if (this->contact[0].isEmpty()) {
			cout << "An empty string is not allowed" << endl;
			this->contact[0] = Contact();
			this->number--;
		}
	} else {
		this->contact[this->number].setData();
		if (this->contact[this->number].isEmpty()) {
			cout << "An empty string is not allowed" << endl;
			this->contact[this->number] = Contact();
			this->number--;
		}
	}
	this->number++;
}

void PhoneBook::viewContacts() const {

	cout << "+--------------------------------------+" << endl;
	cout << "|Index| FirstName| LastName | NickName |" << endl;
	cout << "+--------------------------------------+" << endl;

	for (int i = 0; i < this->number; i++) {
		cout << "|" << setw(5) << i + 1 << "|";

		if (this->contact[i].getFirstName().length() > 10) {
			cout << this->contact[i].getFirstName().substr(0, 9) << ".|";
		} else {
			cout << setw(10) << this->contact[i].getFirstName() << "|";
		}

		if (this->contact[i].getLastName().length() > 10) {
			cout << this->contact[i].getLastName().substr(0, 9) << ".|";
		} else {
			cout << setw(10) << this->contact[i].getLastName() << "|";
		}

		if (this->contact[i].getNickname().length() > 10) {
			cout << this->contact[i].getNickname().substr(0, 9) << ".|";
		} else {
			cout << setw(10) << this->contact[i].getNickname() << "|";
		}
		cout << endl;
	}
	cout << "+--------------------------------------+" << endl;
}

void PhoneBook::getMain() {

	std::cout << "+-------------------------------------------------------+" << endl;
	std::cout << "|                  AVAILABLE COMMANDS                   |" << endl;
	std::cout << "+-------------------------------------------------------+" << endl;
	std::cout << "|                                                       |" << endl;
	std::cout << "|     ADD     -   Add a contact                         |" << endl;
	std::cout << "|                                                       |" << endl;
	std::cout << "|     SEARCH  -   Find a contact                        |" << endl;
	std::cout << "|                                                       |" << endl;
	std::cout << "|     EXIT    -   exit from PhoneBook                   |" << endl;
	std::cout << "|                                                       |" << endl;
	std::cout << "+-------------------------------------------------------+" << endl;
}

void PhoneBook::viewFullInfo() const {

	cout << "|" << "FirstName:		|" << setw(10) << this->contact.getFirstName() << "|" << endl;
	cout << "|" << "LastName:		|" << setw(10) << this->contact.getLastName() << "|" << endl;
	cout << "|" << "Nickname:		|" << setw(10) << this->contact.getNickname() << "|" << endl;
	cout << "|" << "PhoneNumber:	|" << setw(10) << this->contact.getPhoneNumber() << "|" << endl;
	cout << "|" << "DarkestSecret:	|" << setw(10) << this->contact.getDarkestSecret() << "|" << endl;
}

void PhoneBook::numContacts() const {

	string	id;
	int		index;

	cout << "Enter contact number:" << endl;
	getline(cin, id);
	index = atoi(id.c_str());
	if (index < 1 || index > this->number) {
		cout << "Contact not found" << endl;
		return ;
	}
	viewFullInfo(contact[index - 1]);
}

void PhoneBook::searchContact() const {

	if (this->number == 0) {
		cout << "Sorry, PhoneBook is empty" << endl;
		return ;
	}
	viewContacts();
	numContacts();
}
