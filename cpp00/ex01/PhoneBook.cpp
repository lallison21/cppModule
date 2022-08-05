#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->number = 0;
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::addContact() {

	if (this->number == 8) {
		this->number = 0;
		this->contact[this->number].setData();
		if (this->contact[this->number].isEmpty()) {
			std::cout << "An empty string is not allowed" << std::endl;
			this->contact[this->number] = Contact();
			this->number--;
		}
	} else {
		this->contact[this->number].setData();
		if (this->contact[this->number].isEmpty()) {
			std::cout << "An empty string is not allowed" << std::endl;
			this->contact[this->number] = Contact();
			this->number--;
		}
	}
	this->number++;
}

void PhoneBook::viewContacts() const {

	std::cout << "+--------------------------------------------------+" << std::endl;
	std::cout << "|  Index  |  FirstName  |  LastName  |   NickName  |" << std::endl;
	std::cout << "+--------------------------------------------------+" << std::endl;

	for (int i = 0; i < 8; i++) {
		std::cout << "|" << std::setw(9) << i + 1 << "|";

		if (this->contact[i].getFirstName().length() > 14) {
			std::cout << this->contact[i].getFirstName().substr(0, 12) << ".|";
		} else {
			std::cout << std::setw(13) << this->contact[i].getFirstName() << "|";
		}

		if (this->contact[i].getLastName().length() > 10) {
			std::cout << this->contact[i].getLastName().substr(0, 11) << ".|";
		} else {
			std::cout << std::setw(12) << this->contact[i].getLastName() << "|";
		}

		if (this->contact[i].getNickname().length() > 10) {
			std::cout << this->contact[i].getNickname().substr(0, 12) << ".|";
		} else {
			std::cout << std::setw(13) << this->contact[i].getNickname() << "|";
		}
		std::cout << std::endl;
	}
	std::cout << "+--------------------------------------------------+" << std::endl;
}

void PhoneBook::getMain() {

	std::cout << "+-------------------------------------------------------+" << std::endl;
	std::cout << "|                  AVAILABLE COMMANDS                   |" << std::endl;
	std::cout << "+-------------------------------------------------------+" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "|     ADD     -   Add a contact                         |" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "|     SEARCH  -   Find a contact                        |" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "|     EXIT    -   exit from PhoneBook                   |" << std::endl;
	std::cout << "|                                                       |" << std::endl;
	std::cout << "+-------------------------------------------------------+" << std::endl;
}

void PhoneBook::viewFullInfo(Contact contact) const {

	std::cout << "|" << "FirstName:			    |" << std::setw(14) << contact.getFirstName() << "|" << std::endl;
	std::cout << "|" << "LastName:			    |" << std::setw(14) << contact.getLastName() << "|" << std::endl;
	std::cout << "|" << "Nickname:			    |" << std::setw(14) << contact.getNickname() << "|" << std::endl;
	std::cout << "|" << "PhoneNumber:			    |" << std::setw(14) << contact.getPhoneNumber() << "|" << std::endl;
	std::cout << "|" << "DarkestSecret:			    |" << std::setw(14) << contact.getDarkestSecret() << "|" << std::endl;
}

void PhoneBook::numContacts() const {

	std::string	id;
	int		index;

	std::cout << "Enter contact number:" << std::endl;
	getline(std::cin, id);
	index = atoi(id.c_str());
	if (index < 1 || index > this->number) {
		std::cout << "Contact not found" << std::endl;
		return ;
	}
	viewFullInfo(contact[index - 1]);
}

void PhoneBook::searchContact() const {

	if (this->number == 0) {
		std::cout << "Sorry, PhoneBook is empty" << std::endl;
		return ;
	}
	viewContacts();
	numContacts();
}
